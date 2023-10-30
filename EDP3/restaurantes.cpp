#include "restaurantes.h"

void Restaurante::initializeNULLNode(pnodoRest nodo, pnodoRest padre) {
    nodo->valor = 0;
    nodo->padre = padre;
    nodo->Hizq= nullptr;
    nodo->Hder = nullptr;
    nodo->color = 0;
}

void Restaurante::preOrden(pnodoRest nodo) {
    if (nodo != TNULL) {
      cout << nodo->valor << " ";
      preOrden(nodo->Hizq);
      preOrden(nodo->Hder);
    }
}

void Restaurante::inOrden(pnodoRest nodo) {
    if (nodo != TNULL) {
      inOrden(nodo->Hizq);
      cout << nodo->valor << " ";
      inOrden(nodo->Hder);
    }
}

void Restaurante::postOrden(pnodoRest nodo) {
    if (nodo != TNULL) {
      postOrden(nodo->Hizq);
      postOrden(nodo->Hder);
      cout << nodo->valor << " ";
    }
}


pnodoRest Restaurante::Busqueda(pnodoRest nodo, int id, int idPais, int idCiudad) {
    if (nodo == TNULL || (id == nodo->valor && idPais == nodo->idPais && idCiudad == nodo->idCiudad)) {
      nodo->cont++;
      // cout <<  "asdasd" << nodo->valor << endl;
      return nodo;
    }

    if (id < nodo->valor) {
      return Busqueda(nodo->Hizq, id, idPais, idCiudad);
    }
    return Busqueda(nodo->Hder, id, idPais, idCiudad);
}

pnodoRest Restaurante::existeAux(pnodoRest nodo, int id, int idPais, int idCiudad) {
    if (nodo == TNULL || (id == nodo->valor && idPais == nodo->idPais && idCiudad == nodo->idCiudad)) {
      return nodo;
    }

    if (id < nodo->valor) {
      return Busqueda(nodo->Hizq, id, idPais, idCiudad);
    }
    return Busqueda(nodo->Hder, id, idPais, idCiudad);
}

void Restaurante::rbModificar(pnodoRest uRaiz, pnodoRest vValor) {
    if (raiz->padre == nullptr) {
      raiz = vValor;
    } else if (uRaiz == uRaiz->padre->Hizq) {
      uRaiz->padre->Hizq = vValor;
    } else {
      uRaiz->padre->Hder = vValor;
    }
    vValor->padre = uRaiz->padre;
}

void Restaurante::insertarBalanceado(pnodoRest NodoEva) {
    pnodoRest uValor;
    while (NodoEva->padre->color == 1) {
      if (NodoEva->padre == NodoEva->padre->padre->Hder) {
        uValor = NodoEva->padre->padre->Hizq;
        if (uValor->color == 1) {
          uValor->color = 0;
          NodoEva->padre->color = 0;
          NodoEva->padre->padre->color = 1;
          NodoEva = NodoEva->padre->padre;
        } else {
          if (NodoEva == NodoEva->padre->Hizq) {
            NodoEva = NodoEva->padre;
            RotacionDerecha(NodoEva);
          }
          NodoEva->padre->color = 0;
          NodoEva->padre->padre->color = 1;
          RotacionIzquierda(NodoEva->padre->padre);
        }
      } else {
        uValor = NodoEva->padre->padre->Hder;

        if (uValor->color == 1) {
          uValor->color = 0;
          NodoEva->padre->color = 0;
          NodoEva->padre->padre->color = 1;
          NodoEva = NodoEva->padre->padre;
        } else {
          if (NodoEva == NodoEva->padre->Hder) {
            NodoEva = NodoEva->padre;
            RotacionIzquierda(NodoEva);
          }
          NodoEva->padre->color = 0;
          NodoEva->padre->padre->color = 1;
          RotacionDerecha(NodoEva->padre->padre);
        }
      }
      if (NodoEva == raiz) {
        break;
      }
    }
    raiz->color = 0;
}

void Restaurante::MostrarRN(pnodoRest raiz, string indent, bool ultimo) {
    if (raiz != TNULL) {
      cout << indent;
      if (ultimo) {
        cout << "Derecha----";
        indent += "   ";
      } else {
        cout << "Izquierda----";
        indent += "|  ";
      }

      string sColor = raiz->color ? "Rojo" : "Negro";
      cout << raiz->valor << "(" << sColor << ")" << endl;
      MostrarRN(raiz->Hizq, indent, false);
      MostrarRN(raiz->Hder, indent, true);
    }
}

Restaurante::Restaurante() {
    TNULL = new NodoRestaurante;
    TNULL->color = 0;
    TNULL->Hizq = nullptr;
    TNULL->Hder = nullptr;
    raiz = TNULL;
}

void Restaurante::preordenM() {
  preOrden(this->raiz);
}

void Restaurante::inordenM() {
  inOrden(this->raiz);
}

void Restaurante::postorderM() {
  postOrden(this->raiz);
}

void Restaurante::BusquedaM(int id, int idPais, int idCiudad) {
  NodoRestaurante* buscado = Busqueda(this->raiz, id, idPais, idCiudad);
  if (!existe(id, idPais, idCiudad)) {
    cout << "No se encontro este restaurante" << endl;
  } else {
    cout << "ID Restaurante: " << buscado->valor << "\nNombre: " << buscado->nombre << "\nID pais: " << buscado->idPais << "\nID ciudad: " << buscado->idCiudad << endl;
  }
}

bool Restaurante::existe(int id, int idPais, int idCiudad) {
  NodoRestaurante* buscado = Busqueda(this->raiz, id, idPais, idCiudad);
  if (buscado == NULL || buscado->valor == -1) {
    return false;
  } else {
    return true;
  }
}

pnodoRest Restaurante::minimo(pnodoRest nodo) {
  while (nodo->Hizq != TNULL) {
    nodo = nodo->Hizq;
  }
  return nodo;
}

pnodoRest Restaurante::maximo(pnodoRest nodo) {
  while (nodo->Hder != TNULL) {
    nodo = nodo->Hder;
  }
  return nodo;
}

pnodoRest Restaurante::successor(pnodoRest nodo) {
  if (nodo->Hder != TNULL) {
    return minimo(nodo->Hder);
  }

  pnodoRest y = nodo->padre;
  while (y != TNULL && nodo == y->Hder) {
    nodo = y;
    y = y->padre;
  }
  return y;
}

pnodoRest Restaurante::predecessor(pnodoRest nodo) { ////////////////////////////////AQUI
  if (nodo->Hizq != TNULL) {
    return maximo(nodo->Hizq);
  }

  pnodoRest y = nodo->padre;
  while (y != TNULL && nodo == y->Hizq) {
    nodo = y;
    y = y->padre;
  }

  return y;
}

void Restaurante::RotacionIzquierda(pnodoRest nodo) {
  pnodoRest y = nodo->Hder;
  nodo->Hder = y->Hizq;
  if (y->Hizq != TNULL) {
    y->Hizq->padre = nodo;
  }
  y->padre = nodo->padre;
  if (nodo->padre == nullptr) {
    this->raiz = y;
  } else if (nodo == nodo->padre->Hizq) {
    nodo->padre->Hizq = y;
  } else {
    nodo->padre->Hder = y;
  }
  y->Hizq = nodo;
  nodo->padre = y;
}

void Restaurante::RotacionDerecha(pnodoRest nodo) {
  pnodoRest y = nodo->Hizq;
  nodo->Hizq = y->Hder;
  if (y->Hder != TNULL) {
    y->Hder->padre= nodo;
  }
  y->padre = nodo->padre;
  if (nodo->padre == nullptr) {
    this->raiz = y;
  } else if (nodo == nodo->padre->Hder) {
    nodo->padre->Hder = y;
  } else {
    nodo->padre->Hizq= y;
  }
  y->Hder = nodo;
  nodo->padre = y;
}

void Restaurante::insertar(int idPais, int idCiudad, int valornuevo, string nombre) {
  pnodoRest nodo = new NodoRestaurante;
  nodo->padre = nullptr;
  nodo->valor = valornuevo;
  nodo->idPais = idPais;
  nodo->idCiudad = idCiudad;
  nodo->nombre = nombre;
  nodo->Hizq = TNULL;
  nodo->Hder = TNULL;
  nodo->color = 1;

  pnodoRest y = nullptr;
  pnodoRest x = this->raiz;

  while (x != TNULL) {
    y = x;
    if (nodo->valor < x->valor) {
      x = x->Hizq;
    } else {
      x = x->Hder;
    }
  }

  nodo->padre = y;
  if (y == nullptr) {
    raiz = nodo;
  } else if (nodo->valor< y->valor) {
    y->Hizq = nodo;
  } else {
    y->Hder = nodo;
  }

  if (nodo->padre== nullptr) {
    nodo->color = 0;
    return;
  }

  if (nodo->padre->padre == nullptr) {
    return;
  }

  insertarBalanceado(nodo);
}

pnodoRest Restaurante::getRaiz() {
  return this->raiz;
}

void Restaurante::MostrarRN() {
  if (raiz) {
    MostrarRN(this->raiz, "", true);
  }
}

// void ArbolRestaurante::cargarRests(ArbolPais &paises, ArbolCiudad &ciudades) {
//     ifstream archivo("Archivos/Restaurantes.txt");
//     string line;
    
//     while (getline(archivo, line)) {
//         stringstream ss(line);
//         string temp;
//         int idP, idC, idR;
//         string name;

//         getline(ss, temp, ';');
//         idP = stoi(temp);

//         getline(ss, temp, ';');
//         idC = stoi(temp);

//         getline(ss, temp, ';');
//         idR = stoi(temp);

//         getline(ss, name, ';');

//        insertar(idP, idC, idR, name, paises, ciudades);
//     }

//     archivo.close();
// }


void Restaurante::modificar(int id, int idPais, int idCiudad, string nuevoNombre) {
  if (existe(id, idPais, idCiudad)) {
    modificarAux(this->raiz, id, idPais, idCiudad, nuevoNombre);
    return;
  } else {
    cout << "No existe este restaurante" << endl;
    return;
  }
}


void Restaurante::modificarAux(pnodoRest nodo, int id, int idP, int idC, string nuevo) {
    if (nodo == TNULL || (id == nodo->valor && idP == nodo->idPais && idC == nodo->idCiudad)) {
      nodo->nombre = nuevo;
      cout << "Nombre modificado a: " << nuevo << endl;
      return;
    }

    if (id < nodo->valor) {
      return modificarAux(nodo->Hizq, id, idP, idC, nuevo);
    }
    return modificarAux(nodo->Hder, id, idP, idC, nuevo);
}

void Restaurante::masBuscado() {
  masBuscado(raiz);
}

void Restaurante::masBuscado(pnodoRest r) {
  if (r != TNULL) {
    if (r->cont > raiz->cont) {
      ofstream archivo;
      archivo.open("reportes/restMasbuscado.txt");
      archivo << "Restaurante mas buscado" << endl;
      archivo << "ID: " << r->valor << endl;
      archivo << "Nombre: " << r->nombre << endl;
      archivo << "Ciudad: " << r->idCiudad << endl;
      archivo << "Pais: " << r->idPais << endl;
      // archivo << "Busquedas: " << r->cont << endl;
    }
    masBuscado(r->Hizq);
    masBuscado(r->Hder);
  }
}

void Restaurante::reporte(int idPais, int idCiudad) {
  ofstream archivo;
  archivo.open("reportes/restaurantes.txt");
  archivo << "Preorden restaurantes de pais: " << idPais << "| Ciudad: " << idCiudad << endl;
  reporte(raiz, idPais, idCiudad, archivo);
  archivo.close();
}

void Restaurante::reporte(pnodoRest r, int idP, int idC, ofstream& archivo) {
  if (r != TNULL) {
    if (r->idPais == idP && r->idCiudad == idC) {
      archivo << "ID: " << r->valor << " Nombre: " << r->nombre << endl;
    }
    cout << r->valor << endl;
    reporte(r->Hizq, idP, idC, archivo);
    reporte(r->Hder, idP, idC, archivo);
  }
}

















nodoRest::nodoRest(int id, int idP, int idC, string nombre) {
    this->id = id;
    this->idPais = idC;
    this->idCiudad = idC;
    this->nombre = nombre;
    this->siguiente = NULL;
}

listaRest::listaRest() {
    head = NULL;
}

bool listaRest::existePP(int id, int idPais, int idCiudad) {
    cout << " entro a existe restaurante" <<endl;
    nodoRest* aux = head;
    while (aux != NULL) {
        cout << "bbb" <<endl;
        cout << aux->id <<endl;
        cout<<aux->id<< " a " << id<< "  b  " << aux->idPais<<  "  c  " << idPais<< "  d  " << aux->idCiudad<< "  e   " <<idCiudad<< " i " << aux->nombre<< endl;
        if (aux->id == id && aux->idPais == idPais && aux->idCiudad == idCiudad) {
            cout << "si existe restaurante" << aux->id <<endl;
            return true;
        }
        aux = aux->siguiente;
    }
    cout << " falsoo" <<endl;
    return false;
}


bool listaRest::existe(nodoRest* nuevo) {
    nodoRest* aux = head;
    while (aux != NULL) {
        if (aux->id == nuevo->id && aux->idPais == nuevo->idPais && aux->idCiudad == nuevo->idCiudad) {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}

void listaRest::insertar(int id, int idP, int idC, string nombre, ArbolPais &paises, ArbolCiudad &ciudades, Restaurante& restaurantes) {
    nodoRest* nuevo = new nodoRest(id, idP, idC, nombre);
    if (existe(nuevo)) {
        cout << "Este restaurante ya existe" << endl;
        return;
    } else {
       // if (ciudades.existeCiudad(idC, idP)) {
        if (paises.existePais(idP)) {
            if (head == NULL) {
                head = nuevo;
            } else {
                nodoRest* aux = head;
                while (aux->siguiente != NULL) {
                    aux = aux->siguiente;
                }
                aux->siguiente = nuevo;
            }
            restaurantes.insertar(idP, idC, id, nombre);
            cout << "Nuevo rest insertado" << endl;
        } else {
            cout << "No existe el pais o ciudad" << endl;
            return;
        }
        //}
    }
}

void listaRest::cargarRest(ArbolPais &paises, ArbolCiudad &ciudades, Restaurante& restaurantes) {
    ifstream archivo("Archivos/Restaurantes.txt");
    string line;
    
    while (getline(archivo, line)) {
        stringstream ss(line);
        string temp;
        int idP, idC, idR;
        string name;

        getline(ss, temp, ';');
        idP = stoi(temp);

        getline(ss, temp, ';');
        idC = stoi(temp);

        getline(ss, temp, ';');
        idR = stoi(temp);

        getline(ss, name, ';');

       insertar(idR, idP, idC, name, paises, ciudades, restaurantes);
    }

    archivo.close();
}





















