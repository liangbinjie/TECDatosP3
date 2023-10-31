#include "ListaRest.h"

nodoRest::nodoRest(int id, int idP, int idC, string nombre) {
    this->id = id;
    this->idPais = idP;
    this->idCiudad = idC;
    this->nombre = nombre;
    this->siguiente = NULL;
}

listaRest::listaRest() {
    head = NULL;
}

bool listaRest::existePP(int id, int idPais, int idCiudad) {
    nodoRest* aux = head;
    while (aux) {
        cout << aux->id << "a" << id << " | " << aux->idPais << "b" << idPais << " | " << aux->idCiudad << "c" << idCiudad << endl;
        if (aux->id == id && aux->idCiudad == idCiudad && aux->idPais == idPais) {
            return true;
        }
        aux = aux->siguiente;
    }
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

void listaRest::insertar(int id, int idP, int idC, string nombre, ArbolPais& paises, ArbolCiudad& ciudades, ArbolRestaurante& restaurantes) {
    nodoRest* nuevo = new nodoRest(id, idP, idC, nombre);
    if (existe(nuevo)) {
        cout << "Este restaurante ya existe" << endl;
        return;
    }
    else {
        if (ciudades.existeCiudad(idC, idP)) {
            if (paises.existePais(idP)) {
                if (head == NULL) {
                    head = nuevo;
                }
                else {
                    nodoRest* aux = head;
                    while (aux->siguiente != NULL) {
                        aux = aux->siguiente;
                    }
                    aux->siguiente = nuevo;
                }
                restaurantes.insertar(idP, idC, id, nombre);
                cout << "Nuevo rest insertado" << endl;
            }
            else {
                cout << "No existe el pais o ciudad" << endl;
                return;
            }
        }
    }
}

void listaRest::cargarRest(ArbolPais& paises, ArbolCiudad& ciudades, ArbolRestaurante& restaurantes) {
    ifstream archivo("Restaurantes.txt");
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

string listaRest::buscar(int id, int idP, int idC) {
    nodoRest* aux = head;
    while (aux) {
        if (aux->id == id && aux->idCiudad == idC && aux->idPais == idP) {
            return aux->nombre;
        }
        aux = aux->siguiente;
    }
    return "";
}

void listaRest::modificar(int id, int idP, int idC, string nombreNuevo) {
    nodoRest* aux = head;
    while (aux) {
        if (aux->id == id && aux->idCiudad == idC && aux->idPais == idP) {
            aux->nombre = nombreNuevo;
            return;
        }
        aux = aux->siguiente;
    }
}

void listaRest::eliminar(int id, int idP, int idC) {
    if (head == NULL) {
        cout << "No hay restaurantes";
    }
    else {
        if (id == head->id && idP == head->idPais && head->idCiudad == idC) {
            nodoRest* temp = head;
            head = head->siguiente;
            delete temp;
            return;
        }

        nodoRest* temp = head;
        while (temp->siguiente && temp->siguiente->id != id && idP != temp->siguiente->idPais && temp->siguiente->idCiudad != idC) {
            temp = temp->siguiente;
        }

        if (temp->siguiente) {
            nodoRest* nodoEliminar = temp->siguiente;
            temp->siguiente = nodoEliminar->siguiente;
            delete nodoEliminar;
            return;
        }
    }
}
