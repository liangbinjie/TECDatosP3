#ifndef FACTURAS_H
#define FACTURAS_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class nodoFactura {
	nodoFactura(string id, int cliente, string compra, int precio);
	string id;
	int cliente;
	string compra;
	int precio;
	nodoFactura* siguiente;
};

class listaFactura {
private:
	nodoFactura* primero;
public:
	listaFactura();
	void agregar(string id, int cliente, string compra, int precio);
};

#endif
