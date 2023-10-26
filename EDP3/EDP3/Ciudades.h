#ifndef CIUDADES_H
#define CIUDADES_H

#include <iostream>
#include "Paises.h"
using namespace std;
#include <fstream>
#include <string>
#include <sstream>

class NodoCiudad {
public:
	int id;
	int idPais;
	int FB;
	string nombre;
	NodoCiudad* izq;
	NodoCiudad* der;
	friend class arbolCiudad;

	NodoCiudad();
	NodoCiudad(int id, int idPais, string nombre);

};

typedef NodoCiudad* pnodoCiudad;

class ArbolCiudad {
private:
	NodoCiudad* raiz;

	//void insertarBalanceado(NodoCiudad* r, int id, string nombre, bool Hh, int x);
	//void insertar(int id, string nombre);
	//NodoPais* buscarAux(NodoPais* r, int id);
	void postorden(NodoCiudad* r);
	void inorden(NodoCiudad* r);
	void preorden(NodoCiudad* r);
	NodoCiudad* existeAuxCiudad(NodoCiudad* r, int id, int idPais);

	//NodoPais* existeAux(NodoPais* r, int id);
	NodoCiudad* modificarAux(NodoCiudad* r, int id, int idPais, string nombre);
public:
	ArbolCiudad();
	void insertarBalanceado(NodoCiudad*& r, int id, int idPais, string nombre, bool& Hh);
	void insertar(int id, int idPais, string nombre, ArbolPais aPaises);
	void RotacionDobleIzquierda(NodoCiudad*& n, NodoCiudad*& n1);
	void RotacionDobleDerecha(NodoCiudad*& n, NodoCiudad*& n1);
	void RotacionSimpleDerecha(NodoCiudad*& n, NodoCiudad*& n1);
	void RotacionSimpleIzquierda(NodoCiudad*& n, NodoCiudad*& n1);
	bool existeCiudad(int id, int idPais);
	void reporteCiudad(int idPais, ArbolPais& aPaises, ArbolCiudad& aCiudades);
	void preordenReporte1(int idPais, ArbolPais& aPaises, ArbolCiudad& aCiudades);
	void preordenReporte2(NodoCiudad* r, int idPais, ArbolPais& aPaises, ArbolCiudad& aCiudades);
	void insertarReporte(int id, int idPais, string nombre, ArbolPais& aPaises);
	void resetearReportes1();
	void resetearReportes2(NodoCiudad* r);
	void escArchivo2(NodoCiudad* r);
	void escArchivo1();


	//void insertar(int id, string nombre);
	void cargarCiudades(ArbolPais aPaises);
	string buscarCiudad(int id, int idPais);
	//bool existe(int id);
	void modificar(int id, string nombre, int idPais, ArbolPais& aPaises);

	void preorden();
	void inorden();
	void postorden();

};


#endif 