#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;
#include "Paises.h"
#include "Ciudades.h"
#include "restaurantes.h"

struct NodoMenu {
	int clave;
	int nivel;
	int idPais;
	int idCiudad;
	int idRest;
	int cont;
	string nombre;
	NodoMenu* izquierda;
	NodoMenu* derecha;
};


class ArbolMenu {
public:
	ArbolMenu();
	void insertar(int clave, int idPais, int idCiudad, int idRest, string nombre, ArbolPais paises, ArbolCiudad ciudades, ArbolRestaurante restaurantes);
	void mostrar();
	bool existe(int clave, int idPais, int idCiudad, int idRest);
	string buscar(int clave, int idPais, int idCiudad, int idRest);
	//string nombre(string nom);
	//void buscarStr(int clave, int idPais, int idCiudad, int idRest);
	void modificar(int clave, int idPais, int idCiudad, int idRest, string nuevoNombre);
	void cargarMenus(ArbolPais paises, ArbolCiudad ciudades, ArbolRestaurante rests);
	void masBuscado();
	void reporte(int idP, int idC, int idR);
	NodoMenu* eliminar(int clave, int idPais, int idCiudad, int idRest);




private:
	NodoMenu* raiz;
	NodoMenu* sesgar(NodoMenu* nodo);
	NodoMenu* dividir(NodoMenu* nodo);
	NodoMenu* insertarRec(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest, string nombre);
	void mostrarRec(NodoMenu* nodo, int profundidad);
	bool existeRec(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest);
	string buscarRec(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest);
	//void buscarRecStr(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest);
	void modificar(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest, string nuevoNombre);
	void reporte(NodoMenu* nodo, int profundidad, ofstream& archivo, int idP, int idC, int idR);
	void masBuscado(NodoMenu* nodo, int profundidad, NodoMenu* menu);
	NodoMenu* encontrarSucesor(NodoMenu* nodo);
	NodoMenu* eliminarRec(NodoMenu* nodo, int clave, int idPais, int idCiudad, int idRest);


};

#endif