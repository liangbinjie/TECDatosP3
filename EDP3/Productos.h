#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <iostream>
#include <sstream>
#include <fstream>
#include "Paises.h"
#include "Ciudades.h"
#include "Restaurantes.h"
#include "Menu.h"
#include "ListaRest.h"

using namespace std;

class NodoProducto {
private:
    NodoProducto* siguiente;
    NodoProducto* anterior;
    int codPais;
    int codCiudad;
    int codRest;
    int codMenu;
    int codProducto;

    int contador;

    friend class ArbolProducto;

public:
    string nombre;
    int kcal;
    int precio;
    int cantidad;
    NodoProducto(int cp, int cc, int cr, int cm, int cpro, string nombre, int kc, int p, int cant);
    NodoProducto(int cp, int cc, int cr, int cm, int cpro, string nombre, int kc, int p, int cant, NodoProducto* sigNodo);
};

typedef NodoProducto* pNodoProducto;

class ArbolProducto {
private:
    pNodoProducto primero;

public:
    ArbolProducto();
    // ListaProducto()

    bool ArbolVacio();
    void insertarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cant);
    bool existeProducto(int pCodPais, int pCodCiudad, int pCodRes, int pCodMenu, int pCodProducto);
    NodoProducto* buscarProducto(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto);
    void mostrar();
    void reporteProducto(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu);
    void cargarProductos(ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRests, ArbolMenu& lMenus);
    void modificarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cant);
    void mostrarProductosMenu(int codPais, int codCiudad, int codRest, int codMenu);
    void precio(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenuRest);
    void productoMasComprado();
    void aumentarCompra(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto, ArbolPais& lPais, ArbolCiudad& lCiudad, listaRest& lRest, ArbolMenu& lMenuRest);
    int getProducto(int id, int idP, int idC, int idR, int idM);
    void eliminar(int id, int idP, int idC, int idR, int idM);
    void reporteProductoPrecio(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu);
};



#endif