#include "Compra.h"
using namespace std;

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

void listaCompra::agregar(string id, int idP, int idC, int idR, int idM, string compra, int cliente, double precio) {

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

bool listaCompra::existe(string id) {
	nodoCompra* aux = primero;
	while (aux) {
		if (aux->id == id) {
			return true;
		}
		aux = aux->siguiente;
	}
	return false;
}

void listaCompra::eliminar(string id) {
	if (primero->id == id) {
		nodoCompra* temp = primero;
		primero = primero->siguiente;
		delete primero;
		return;
	}
	else {
		nodoCompra* aux = primero;
		while (aux->siguiente && aux->siguiente->id != id) {
			aux = aux->siguiente;
		}
		if (aux->siguiente) {
			nodoCompra* temp = aux->siguiente;
			aux->siguiente = temp->siguiente;
			delete temp;
			return;
		}
	}
}


string listaCompra::buscar(string id) {
	nodoCompra* aux = primero;
	string out = "";
	while (aux) {
		if (aux->id == id) {
			out += aux->compra;
			return out;
		}
		aux = aux->siguiente;
	}
	return "";
}
