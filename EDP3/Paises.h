#ifndef PAISES_H
#define PAISES_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class NodoPais {
public:
	int id;
	string nombre;
	NodoPais* izq;
	NodoPais* der;
	friend class ArbolPais;

	NodoPais();
	NodoPais(int id, string nombre);

};

typedef NodoPais* pnodoPais;

class ArbolPais {
private:
	NodoPais* raiz;

	void insertarAux(NodoPais* r, int id, string nombre);
	NodoPais* buscarAux(NodoPais* r, int id);
	void preorden(NodoPais* r);
	void reporte(NodoPais* r, ofstream& archivo);
	NodoPais* modificarAux(NodoPais* r, int id, string nombreNuevo);
public:
	ArbolPais();
	void reporte();
	void insertar(int id, string nombre);
	void cargarPais();
	string buscar(int id);
	bool existePais(int id);
	void modificar(int id, string nombreNuevo);
	NodoPais* existeAux(NodoPais* r, int id);
	NodoPais* punteroPais(int id);
	void preorden();
	string hola();
};


#endif
