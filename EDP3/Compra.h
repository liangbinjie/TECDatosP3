#ifndef COMPRA_H
#define COMPRA_H

#include <iostream>
using namespace std;

class nodoCompra {
public:
	nodoCompra(string id, int idP, int idC, int idR, int idM, string compra, int cliente, double precio);
	string id;
	int cliente;
	int idP;
	int idC;
	int idR;
	int idM;
	double precio;
	string compra;
	nodoCompra* siguiente;
};

class listaCompra {
private:
	nodoCompra* primero;
public:
	listaCompra();
	void agregar(string id, int idP, int idC, int idR, int idM, string compra, int cliente, double precio);
	void eliminar(string id);
	int cont();
	string buscar(string id);
	bool existe(string id);
};

#endif