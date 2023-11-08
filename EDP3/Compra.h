#ifndef COMPRA_H
#define COMPRA_H

#include <iostream>
using namespace std;

class nodoCompra {
public:
	nodoCompra(int id, int idP, int idC, int idR, int idM, string compra, int cliente, double precio);
	int id;
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
	void agregar(int id, int idP, int idC, int idR, int idM, string compra, int cliente, int precio);
	void eliminar(int id);
	int cont(int cliente);
};

#endif