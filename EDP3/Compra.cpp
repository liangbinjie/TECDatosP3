#include "Compra.h"


nodoCompra::nodoCompra(string id, int idP, int idC, int idR, int idM, string compra, int cliente, double precio) {
	this->id = id;
	this->cliente = cliente;
	this->idP = idP;
	this->idC = idC;
	this->idR = idR;
	this->idM = idM;
	this->precio = precio;
	this->compra = compra;
	this->siguiente = NULL;
}

listaCompra::listaCompra() {
	primero = NULL;
}

int listaCompra::cont() {
	nodoCompra* aux = primero;
	int contador = 0;
	while (aux) {
		contador++;
		aux = aux->siguiente;
	}
	contador++;
	return contador;
}

void listaCompra::agregar(string id, int idP, int idC, int idR, int idM, string compra, int cliente, int precio) {

	if (primero == NULL) {
		primero = new nodoCompra(id, idP, idC, idR, idM, compra, cliente, precio);
	}
	else {
		nodoCompra* aux = primero;
		while (aux->siguiente != NULL) {
			aux = aux->siguiente;
		}
		aux->siguiente = new nodoCompra(id, idP, idC, idR, idM, compra, cliente, precio);
	}

}

void listaCompra::eliminar(int id) {

}

