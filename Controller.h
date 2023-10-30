#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Paises.h"
#include "Ciudades.h"
#include "Admins.h"

extern ArbolPais paises;
extern ArbolCiudad ciudades;
extern listaAdmins administradores;
extern listaAdmins clientes;

extern bool boolInsertarPais;
extern bool boolBuscarPais;
extern bool boolModificarPais;

#endif