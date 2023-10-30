#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Paises.h"
#include "Ciudades.h"
#include "Admins.h"

// extern variables for Paises ----------------------------------------
extern ArbolPais paises;
extern bool boolInsertarPais;
extern bool boolBuscarPais;
extern bool boolModificarPais;
extern bool boolEliminarPais;


// extern variables for ciudades ----------------------------------------
extern ArbolCiudad ciudades;
extern bool boolInsertarCiudad;
extern bool boolBuscarCiudad;
extern bool boolModificarCiudad;
extern bool boolEliminarCiudad;


// extern variables for restaurantes ----------------------------------------
//extern ArbolRestaurante rest;
extern bool boolInsertarRest;
extern bool boolBuscarRest;
extern bool boolModificarRest;
extern bool boolEliminarRest;


// extern variables for clientes ----------------------------------------
extern listaAdmins clientes;
extern bool boolInsertarCliente;
extern bool boolBuscarCliente;
extern bool boolModificarCliente;
extern bool boolEliminarCliente;


// extern variables for admins ----------------------------------------
extern listaAdmins administradores;
extern bool boolInsertarAdmin;
extern bool boolBuscarAdmin;
extern bool boolModificarAdmin;
extern bool boolEliminarAdmin;


#endif