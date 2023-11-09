#include "Productos.h"

NodoProducto::NodoProducto(int cp, int cc, int cr, int cm, int cpro, string pNombre, int kc, int p, int cant) {
    codPais = cp;
    codCiudad = cc;
    codRest = cr;
    codMenu = cm;
    codProducto = cpro;
    nombre = pNombre;
    kcal = kc;
    precio = p;
    siguiente = NULL;
    contador = 0;
    cantidad = cant;
}

NodoProducto::NodoProducto(int cp, int cc, int cr, int cm, int cpro, string pNombre, int kc, int p, int cant, NodoProducto* sigNodo) {
    codPais = cp;
    codCiudad = cc;
    codRest = cr;
    codMenu = cm;
    codProducto = cpro;
    nombre = pNombre;
    kcal = kc;
    precio = p;
    siguiente = sigNodo;
    contador = 0;
    cantidad = cant;
}

ArbolProducto::ArbolProducto() {
    primero = NULL;
}

bool ArbolProducto::ArbolVacio() {
    return primero == NULL;
}



NodoProducto* ArbolProducto::buscarProducto(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto) {
    NodoProducto* aux = primero;
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux != NULL) {
            cout << aux->codPais << "a" << aux->codCiudad << "b" << aux->codRest << "c" << aux->codMenu << endl;
            if (aux->codProducto == pCodProducto) {
                if (aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest && aux->codMenu == pCodMenu) {
                    cout << "Encontrado" << endl;
                    return aux;
                }
            }
            aux = aux->siguiente;
        }
    }
    return aux;
}

int ArbolProducto::getProducto(int pCodProducto, int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu) {
    NodoProducto* aux;
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux) {
            cout << aux->codMenu << "asd" << endl;
            if (aux->codMenu == pCodMenu && aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest && aux->codProducto == pCodProducto) {
                return aux->precio;
            }
            aux = aux->siguiente;
        }
        cout << "No se encontro el producto" << endl;
    }
    return 0;
}


void ArbolProducto::precio(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    NodoProducto* aux;
    ofstream archivo;
    archivo.open("reportes/precioProducto.txt");
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux) {
            if (aux->codMenu == pCodMenu && aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest && aux->codProducto == pCodProducto) {
                archivo << "Datos del producto" << endl;
                archivo << "Codigo del pais: " << aux->codPais << "  " << endl;
                archivo << "Codigo de la ciudad: " << aux->codCiudad << endl;
                archivo << "Codigo del restaurante: " << aux->codRest << endl;
                archivo << "Codigo del producto: " << aux->nombre << "  " << aux->codProducto << endl;
                archivo << "Kcal del producto: " << aux->kcal << endl;
                archivo << "Precio del producto: " << aux->precio << endl;
                cout << "Cantidad: " << aux->cantidad << endl;
                archivo.close();
                return;
            }
            aux = aux->siguiente;
        }
        cout << "No se encontro el producto" << endl;
    }
}



bool ArbolProducto::existeProducto(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto) {
    NodoProducto* aux = primero;
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux != NULL) {
            cout << aux->codPais << "a" << aux->codCiudad << "b" << aux->codRest << "c" << aux->codMenu << endl;
            if (aux->codProducto == pCodProducto) {
                if (aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest && aux->codMenu == pCodMenu) {
                    cout << "Encontrado" << endl;
                    return true;
                }
            }
            aux = aux->siguiente;
        }
    }
    return false;
}

void ArbolProducto::reporteProducto(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    NodoProducto* aux;
    ofstream archivo;
    archivo.open("reportes/Productos.txt");
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux) {
            if (aux->codMenu == pCodMenu && aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest) {
                archivo << aux->codProducto << "  " << aux->nombre << endl;

            }


            aux = aux->siguiente;
        }
        archivo.close();
        return;
    }
}


void ArbolProducto::reporteProductoCantidad(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    NodoProducto* aux;
    ofstream archivo;
    archivo.open("reportes/ProductosCantidad.txt");
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux) {
            if (aux->codMenu == pCodMenu && aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest) {
                archivo << aux->codProducto << "  " << aux->nombre << "  " << aux->cantidad << endl;

            }


            aux = aux->siguiente;
        }
        archivo.close();
        return;
    }
}



void ArbolProducto::reporteProductoPrecio(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    NodoProducto* aux;
    ofstream archivo;
    archivo.open("reportes/ProductosPrecio.txt");
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux) {
            if (aux->codMenu == pCodMenu && aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest) {
                archivo << aux->codProducto << "  " << aux->nombre << "  " << aux->precio << endl;

            }


            aux = aux->siguiente;
        }
        archivo.close();
        return;
    }
}


void ArbolProducto::insertarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cant) {
    // if (lMenuRest.existe(codMenu, codPais, codCiudad, codRest)) {

    if (ArbolVacio()) {
        primero = new NodoProducto(codPais, codCiudad, codRest, codMenu, codProducto, nombre, kcal, precio, cant);
    }
    else {
        if (existeProducto(codPais, codCiudad, codRest, codMenu, codProducto)) {
            cout << "Este producto ya existe en el menu, no se puede insertar" << endl;
        }
        else {
            NodoProducto* aux = primero;
            while (aux->siguiente != NULL) {
                aux = aux->siguiente;
            }
            aux->siguiente = new NodoProducto(codPais, codCiudad, codRest, codMenu, codProducto, nombre, kcal, precio, cant);
            aux->siguiente->anterior = aux;
            cout << "Producto insertado" << endl;
            cout << aux->siguiente->nombre << endl;
        }
    }
    // } else {
    //     cout << "Incongruencias con la ubicacion" << endl;
    // }
}

void ArbolProducto::cargarProductos(ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    ifstream archivo("Productos.txt");
    string line;

    while (getline(archivo, line)) {
        stringstream ss(line);
        string temp;
        int idP, idC, idR, idM, id, kcal, precio, cant;
        string name;

        getline(ss, temp, ';');
        idP = stoi(temp);

        getline(ss, temp, ';');
        idC = stoi(temp);

        getline(ss, temp, ';');
        idR = stoi(temp);

        getline(ss, temp, ';');
        idM = stoi(temp);

        getline(ss, temp, ';');
        id = stoi(temp);

        getline(ss, name, ';');

        getline(ss, temp, ';');
        kcal = stoi(temp);

        getline(ss, temp, ';');
        precio = stoi(temp);

        getline(ss, temp, ';');
        cant = stoi(temp);

        insertarProducto(idP, idC, idR, idM, id, name, kcal, precio, cant);
    }

    archivo.close();
}

void ArbolProducto::mostrar() {
    NodoProducto* aux;
    if (primero == NULL)
        cout << "No hay elementos";
    else {
        cout << endl;
        aux = primero;
        while (aux) {
            std::cout << "ID PRODUCTO: " << aux->codProducto << ", Nombre: " << aux->nombre << " -> ";
            aux = aux->siguiente;
        }
        cout << endl;
    }
}

void ArbolProducto::modificarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cant) {
    NodoProducto* aux = primero;
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux != NULL) {
            if (aux->codProducto == codProducto) {
                if (aux->codPais == codPais && aux->codCiudad == codCiudad && aux->codRest == codRest && aux->codMenu == codMenu) {
                    cout << "Encontrado" << endl;
                    aux->nombre = nombre;
                    aux->precio = precio;
                    aux->kcal = kcal;
                    aux->cantidad = cant;
                    return;
                }
            }
            aux = aux->siguiente;
        }
    }
    return;
}

void ArbolProducto::mostrarProductosMenu(int codPais, int codCiudad, int codRest, int codMenu) {
    if (primero == NULL) {
        cout << "No hay productos en la base de datos" << endl;
    }
    else {
        pNodoProducto aux = primero;
        while (aux) {
            if (aux->codCiudad == codCiudad && aux->codPais == codPais && aux->codRest == codRest && aux->codMenu == codMenu) {
                cout << "- " << aux->codProducto << ". " << aux->nombre << endl;
            }
            aux = aux->siguiente;
        }
    }
}

void ArbolProducto::productoMasComprado() {
    if (primero == NULL) {
        cout << "No hay productos en la base de datos" << endl;
    }
    else {
        ofstream archivo;
        archivo.open("reportes/productoMasBuscado.txt");
        pNodoProducto aux = primero;
        pNodoProducto temp = primero;
        int mayor = primero->contador;
        while (aux) {
            if (aux->contador > mayor) {
                temp = aux;
            }
            aux = aux->siguiente;
        }
        archivo << "Producto mas comprado: " << endl;
        archivo << temp->nombre << endl;
        archivo << temp->codProducto << endl;
        archivo << "Compras: " << temp->contador << endl;
        archivo.close();
    }
}

void ArbolProducto::aumentarCompra(int pCodPais, int pCodCiudad, int pCodRest, int pCodMenu, int pCodProducto, ArbolPais& lPaises, ArbolCiudad& lCiudades, listaRest& lRest, ArbolMenu& lMenu) {
    /*
    Esta funcion es para aumentar el contador de compras de este producto, para el producto mas buscado en la realizacion de compras
    */
    NodoProducto* aux = primero;
    if (primero == NULL) {
        cout << "No hay elementos" << endl;
    }
    else {
        aux = primero;
        while (aux != NULL) {
            if (aux->codProducto == pCodProducto) {
                if (aux->codPais == pCodPais && aux->codCiudad == pCodCiudad && aux->codRest == pCodRest && aux->codMenu == pCodMenu) {
                    aux->contador++;
                    return;
                }
            }
            aux = aux->siguiente;
        }
    }
}

void ArbolProducto::eliminar(int id, int idP, int idC, int idR, int idM) {
    if (primero == NULL) {
        cout << "No hay nada" << endl;
    }
    else {
        if (id == primero->codMenu && primero->codPais == idP && primero->codCiudad == idC && primero->codRest == idR && primero->codMenu == idM) {
            NodoProducto* temp = primero;
            primero = primero->siguiente;
            //ofstream archivo;
           // archivo.open("reportes/ProductosEliminados.txt", ios::app); // Abre el archivo en modo "append"
           // archivo << "Pais " << temp->codPais << "   " << "Ciudad " << temp->codCiudad << "   " << "Restaurante " << temp->codRest << "   " << "Menu " << temp->codMenu << "   " << "ID producto " << temp->codProducto << "   " << "Nombre " << temp->nombre << endl;
           // archivo.close();
          delete temp;
            return;
        }

        NodoProducto* temp = primero;
        while (temp->siguiente && temp->siguiente->codMenu != id && temp->siguiente->codPais != idP && temp->siguiente->codCiudad != idC && temp->siguiente->codRest != idR && temp->siguiente->codMenu != idM) {
            temp = temp->siguiente;
        }
        if (temp->siguiente) {
            NodoProducto* nodoEliminar = temp->siguiente;
            temp->siguiente = nodoEliminar->siguiente;
            ofstream archivo;
            archivo.open("reportes/ProductosEliminados.txt", ios::app); // Abre el archivo en modo "append"
            archivo << "Pais " << temp->codPais << "   " << "Ciudad " << temp->codCiudad << "   " << "Restaurante " << temp->codRest << "   " << "Menu " << temp->codMenu << "   " << "ID producto " << temp->codProducto << "   " << "Nombre " << temp->nombre << endl;
            archivo.close();
            delete nodoEliminar;
            return;
        }
    }
}


string ArbolProducto::verProductos(int idP, int idC, int idR, int idM) {
    pNodoProducto aux = primero;
    string out = "";
    while (aux) {
        if (aux->codPais == idP && aux->codMenu == idM && aux->codCiudad == idC && aux->codRest == idR) {
            out += to_string(aux->codProducto) + ". " + aux->nombre + "\r\n";
        }
        aux = aux->siguiente;

    }
    return out;
}