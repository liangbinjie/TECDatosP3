#ifndef RESTAURANTES_H
#define RESTAURANTES_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

#include "Paises.h"
#include "Ciudades.h"

class NodoRestaurante {
public:
    int idPais;
    int idCiudad;
    int valor;
    string nombre;
    int cont; // contador para busquedas
    NodoRestaurante* padre;
    NodoRestaurante* Hizq;
    NodoRestaurante* Hder;
    int color;

    friend class ArbolRestaurante;
};

typedef NodoRestaurante* pnodoRest;

class ArbolRestaurante {
private:
    pnodoRest raiz;
    pnodoRest TNULL;

    void initializeNULLNode(pnodoRest nodo, pnodoRest padre);
    void preOrden(pnodoRest nodo);
    void inOrden(pnodoRest nodo);
    void postOrden(pnodoRest nodo);
    pnodoRest Busqueda(pnodoRest nodo, int id, int idPais, int idCiudad);
    void rbModificar(pnodoRest uRaiz, pnodoRest vValor);
    void insertarBalanceado(pnodoRest NodoEva);
    void MostrarRN(pnodoRest raiz, string indent, bool ultimo);
    pnodoRest existeAux(pnodoRest nodo, int id, int idPais, int idCiudad);
    void modificarAux(pnodoRest nodo, int id, int idPais, int idCiudad, string nuevoNombre);
    void masBuscado(pnodoRest nodo);
    void reporte(pnodoRest nodo, int idPais, int idCiudad, ofstream& archivo);

public:
    ArbolRestaurante();
    void preordenM();
    void inordenM();
    void postorderM();
    void BusquedaM(int id, int idPais, int idCiudad);
    bool existe(int id, int idPais, int idCiudad);
    pnodoRest minimo(pnodoRest nodo);
    pnodoRest maximo(pnodoRest nodo);
    pnodoRest successor(pnodoRest nodo);
    pnodoRest predecessor(pnodoRest nodo);
    void RotacionIzquierda(pnodoRest nodo);
    void RotacionDerecha(pnodoRest nodo);
    void insertar(int idPais, int idCiudad, int valornuevo, string nombre);
    pnodoRest getRaiz();
    void MostrarRN();
    void cargarRests(ArbolPais& paises, ArbolCiudad& ciudades);
    void modificar(int id, int idPais, int idCiudad, string nuevoNombre);
    void masBuscado();
    void reporte(int idPais, int idCiudad);
};


#endif