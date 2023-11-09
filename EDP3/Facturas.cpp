#include "Facturas.h"


nodoFactura::nodoFactura(string id, int cliente, string compra, double precio) {
	this->id = id;
	this->cliente = cliente;
	this->compra = compra;
	this->precio = precio;
	siguiente = NULL;
}

listaFactura::listaFactura() {
	primero = NULL;
}

void listaFactura::agregar(string id, int cliente, string compra, double precio) {
	if (primero == NULL) {
		primero = new nodoFactura(id, cliente, compra, precio);
	}
	else {
		nodoFactura* aux = primero;
		while (aux->siguiente != NULL) {
			aux = aux->siguiente;
		}
		aux->siguiente = new nodoFactura(id, cliente, compra, precio);
	}
}

void listaFactura::reporteMasAlto() {
	nodoFactura* aux = primero;
	nodoFactura* aux2 = primero;
	double mayor = aux->precio;
	while (aux) {
		if (aux->precio > mayor) {
			aux2 = aux;
		}
		aux = aux->siguiente;
	}
	ofstream archivo("reportes/facturaMasAlta.txt");
	archivo << aux2->id << endl;
	archivo << "Cliente: " << aux2->cliente << endl;
	archivo << "Compra: \n" << aux2->compra;
	archivo << "Total: " << aux2->precio;
	archivo.close();
}

void listaFactura::reporteMenosAlto() {
	nodoFactura* aux = primero;
	nodoFactura* aux2 = primero;
	double menor = aux->precio;
	while (aux) {
		if (aux->precio < menor) {
			aux2 = aux;
		}
		aux = aux->siguiente;
	}
	ofstream archivo("reportes/facturaMenosAlta.txt");
	archivo << aux2->id << endl;
	archivo << "Cliente: " << aux2->cliente << endl;
	archivo << "Compra: \n" << aux2->compra;
	archivo << "Total: " << aux2->precio;
	archivo.close();
}


