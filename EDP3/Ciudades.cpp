#include "Ciudades.h"
#include "Controller.h"

NodoCiudad::NodoCiudad() {
	id = 0;
	FB = 0;
	idPais = 0;
	nombre = "";
	izq = NULL;
	der = NULL;
}

NodoCiudad::NodoCiudad(int pId, int pIdPais, string pNombre) {
	id = pId;
	FB = 0;
	idPais = pIdPais;
	nombre = pNombre;
	izq = NULL;
	der = NULL;
}


ArbolCiudad::ArbolCiudad() {
    raiz = NULL;
}

void ArbolCiudad::insertar(int id, int idPais, string nombre, ArbolPais aPaises) {
        if (raiz == NULL) {
            raiz = new NodoCiudad(id, idPais, nombre);
            cout << "Nueva ciudad insertada" << nombre << endl;
        }
        else {
            if (existeCiudad(id, idPais)) {
                cout << "Esta ciudad ya existe" << id << endl;
            }
            else {
                bool Hh = false;
                cout << " Nueva ciudad a insertar" << id << endl;
                insertarBalanceado(raiz, id, idPais, nombre, Hh);
            }
        }
}


void ArbolCiudad::insertarBalanceado(NodoCiudad*& r, int id, int idPais, string nombre, bool& Hh) {


    if (r == NULL) {
        r = new NodoCiudad(id, idPais, nombre);
        //cout<<r->id<<" igual a Null"<<endl;
        Hh = true;
    }
    else {
        //cout<<"no Null "<<r->id<<endl;
        if (id <= r->id) {
            //cout<< id <<" es menor a "<<r->id<<endl;
            insertarBalanceado(r->izq, id, idPais, nombre, Hh);

            if (Hh) {
                //cout <<"hh izquierdo true"<<endl;
                //cout<<r->id<<" "<<r->FB<<endl;
                switch (r->FB) {
                case 1: r->FB = 0;
                    Hh = false;
                    break;
                case 0:
                    r->FB = -1;
                    break;
                case -1:
                    NodoCiudad * n1 = r->izq;
                    if (n1->FB == -1) {
                        RotacionSimpleIzquierda(r, n1);
                    }
                    else {
                        RotacionDobleIzquierda(r, n1);
                    }
                    Hh = false;
                    break;
                }
            }
        }
        else {
            if (id >= r->id) {
                //cout<< id <<" es mayor a "<<r->id<<endl;
                insertarBalanceado(r->der, id, idPais, nombre, Hh);

                if (Hh) {
                    //cout <<"hh derecho true"<< r->id <<" "<< r->FB<< endl;
                    switch (r->FB) {
                    case -1:
                        r->FB = 0;
                        Hh = false;
                        break;
                    case 0:
                        r->FB = 1;
                        break;
                    case 1:
                        NodoCiudad * n1 = r->der;
                        cout << n1->id << endl;
                        if (n1->FB == 1) {
                            cout << "rotacion simple derecha" << endl;
                            RotacionSimpleDerecha(r, n1);
                        }
                        else {
                            cout << "rotacion doble derecha" << endl;
                            RotacionDobleDerecha(r, n1);
                        }
                        Hh = false;

                        break;
                    }
                }
            }
        }
    }
}


void ArbolCiudad::RotacionDobleIzquierda(NodoCiudad*& n, NodoCiudad*& n1) {
    NodoCiudad* n2;
    n2 = n1->der;
    n->izq = n2->der;
    n2->der = n;
    n1->der = n2->izq;
    n2->izq = n1;

    if (n2->FB == 1) {
        n1->FB = -1;
    }
    else {
        n1->FB = 0;
    }
    if (n2->FB == -1) {
        n->FB = 1;
    }
    else {
        n->FB = 0;
    }
    n2->FB = 0;
    n = n2;
}

void ArbolCiudad::RotacionDobleDerecha(NodoCiudad*& n, NodoCiudad*& n1) {
    NodoCiudad* n2;
    //cout<<"entro"<<endl;
    n2 = n1->izq;
    //cout<<"n "<<n->id<<" n1 "<<n1->id<<" n2 "<<n2->id<<endl;
    n->der = n2->izq;
    n2->izq = n;
    n1->izq = n2->der;
    n2->der = n1;

    //cout<<"n "<<n->id<<" n1 "<<n1->id<<" n2 "<<n2->id<<endl;
    //cout<<"n "<<n->FB<<" n1 "<<n1->FB<<" n2 "<<n2->FB<<endl;

    if (n2->FB == 1) {
        //cout<<"ii"<<endl;
        n->FB = -1;
    }
    else {
        //cout<<"tt"<<endl;
        n->FB = 0;
    }
    if (n2->FB == -1) {
        n1->FB = 1;
    }
    else {
        n1->FB = 0;
    }
    n2->FB = 0;
    //cout<<"n "<<n->id<<" n1 "<<n1->id<<" n2 "<<n2->id<<endl;
    //cout<<"n "<<n->FB<<" n1 "<<n1->FB<<" n2 "<<n2->FB<<endl;
    n = n2;

    //cout<<"fin"<<endl;
    //cout<<"n "<<n->id<<" n1 "<<n1->id<<" n2 "<<n2->id<<endl;
    //cout<<"n "<<n->FB<<" n1 "<<n1->FB<<" n2 "<<n2->FB<<endl;
}

void ArbolCiudad::RotacionSimpleDerecha(NodoCiudad*& n, NodoCiudad*& n1) {
    n->der = n1->izq;
    n1->izq = n;

    if (n1->FB == 1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = 1;
        n1->FB = -1;
    }
    n = n1;
}

void ArbolCiudad::RotacionSimpleIzquierda(NodoCiudad*& n, NodoCiudad*& n1) {
    n->izq = n1->der;
    n1->der = n;

    if (n1->FB == -1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = -1;
        n1->FB = -1;
    }
    n = n1;
}



NodoCiudad* ArbolCiudad::existeAuxCiudad(NodoCiudad* r, int id, int idPais) {
    if (r == NULL || (r->id == id && r->idPais == idPais)) {
        return r;
    }

    if (id <= r->id) {
        return existeAuxCiudad(r->izq, id, idPais);
    }
    else if (id > r->id) {
        return existeAuxCiudad(r->der, id, idPais);
    }
    /*
    else {
        if (idPais < r->idPais) {
            return existeAuxCiudad(r->izq, id, idPais);
        }
        else {
            return existeAuxCiudad(r->der, id, idPais);
        }
    }
    */
}






bool ArbolCiudad::existeCiudad(int id, int idPais) {
    postorden();
    cout << " entro a existe ciudad" << endl;
    NodoCiudad* buscado = existeAuxCiudad(raiz, id, idPais);
    if (buscado == NULL) {
        cout << "jiji" << endl;
        return false;
    }
    else {
        cout << "jiji" << endl;
        return true;
    }

}




string ArbolCiudad::buscarCiudad(int id, int idPais) {
    cout << "entro" << endl;
    NodoCiudad* buscado = existeAuxCiudad(raiz, id, idPais);
    if (buscado == NULL) {
        cout << "No existe esta ciudad" << endl;
        return "";
    }
    else {
        cout << "ID: " << buscado->id << "\nNombre: " << buscado->nombre << "\nPais: " << buscado->nombre << endl;
        return buscado->nombre;

    }
}



NodoCiudad* ArbolCiudad::modificarAux(NodoCiudad* r, int id, int idPais, string nombre) {

    if (r->id == id && r->idPais == idPais) {
        r->nombre = nombre;
        return r;
    }

    if (id < r->id) {
        return modificarAux(r->izq, id, idPais, nombre);
    }
    else {
        return modificarAux(r->der, id, idPais, nombre);
    }
}

void ArbolCiudad::modificar(int id, string nombre, int idPais, ArbolPais& aPaises) {

    if (!existeCiudad(id, idPais)) {
        cout << "No existe esta ciudad" << endl;
    }
    else {
        if (aPaises.existePais(idPais) && existeCiudad(id, idPais)) {
            NodoCiudad* buscado = modificarAux(raiz, id, idPais, nombre);
            cout << "Nombre modificado" << endl;
            cout << "ID: " << buscado->id << "\nNombre: " << buscado->nombre << endl;
        }
        else {
            cout << "Incongruencias con la ubicacion" << endl;
        }
    }
}

void ArbolCiudad::insertarReporte(int id, int idPais, string nombre, ArbolPais& aPaises) {
    //cout << "www" << nombre<< endl;
    if (aPaises.existePais(idPais)) {
        //cout << "uuu " << nombre<< endl;
        if (raiz == NULL) {
            raiz = new NodoCiudad(id, idPais, nombre);
            //cout << "Nueva ciudad insertada" << nombre<< endl;
        }
        else {
            //cout << "ppp" << nombre<< endl;
            if (existeCiudad(id, idPais)) {
                //cout << "Esta ciudad ya existe" << id << endl;
            }
            else {
                bool Hh = false;
                //cout << " Nueva ciudad a insertar" << id<< endl;
                insertarBalanceado(raiz, id, idPais, nombre, Hh);
            }
        }


    }
    else {
        cout << "Incongruencias con la ubicacion ttt" << id << endl;

    }
}

void ArbolCiudad::resetearReportes2(NodoCiudad* r) {
    if (r == NULL)
        return;

    resetearReportes2(r->izq);
    resetearReportes2(r->izq);
    delete r;
}

void ArbolCiudad::resetearReportes1() {
    resetearReportes2(raiz);
    raiz = NULL;
}


void ArbolCiudad::reporteCiudad(int idPais, ArbolPais& aPaises, ArbolCiudad& reporteCiudad) {
    if (aPaises.existePais(idPais)) {
        preordenReporte1(idPais, aPaises, reporteCiudad);;
        reporteCiudad.escArchivo1();
    }
    else {
        cout << "El pais no existe" << endl;
    }

}

void ArbolCiudad::preordenReporte2(NodoCiudad* r, int idPais, ArbolPais& aPaises, ArbolCiudad& reporteCiudad) {
    if (r == NULL) {
        return;
    }
    else {
        if (r->idPais == idPais) {
            //cout <<"paos"<<endl;
            reporteCiudad.insertarReporte(r->id, r->idPais, r->nombre, aPaises);
        }
        preordenReporte2(r->izq, idPais, aPaises, reporteCiudad);
        preordenReporte2(r->der, idPais, aPaises, reporteCiudad);
    }
}


void ArbolCiudad::preordenReporte1(int idPais, ArbolPais& aPaises, ArbolCiudad& reporteCiudad) {
    preordenReporte2(raiz, idPais, aPaises, reporteCiudad);
    cout << endl;
}


void ArbolCiudad::preorden(NodoCiudad* r) {
    if (r == NULL) {
        return;
    }
    else {
        cout << r->id << " - ";
        preorden(r->izq);
        preorden(r->der);
    }
}

void ArbolCiudad::escArchivo2(NodoCiudad* r) {
    if (r == NULL) {
        return;
    }
    else {

        ofstream archivo;
        archivo.open("reportes/Ciudades.txt");
        archivo << "Ciudades del pais " << r->idPais << endl;
        archivo << endl;
        archivo << r->nombre << " - " << endl;
        archivo.close();
        cout << r->id << " - ";
        preorden(r->izq);
        preorden(r->der);
    }
}

void ArbolCiudad::escArchivo1() {
    escArchivo2(raiz);
    cout << endl;
}


void ArbolCiudad::preorden() {
    preorden(raiz);
    cout << endl;
}

void ArbolCiudad::inorden(NodoCiudad* r) {
    if (r == NULL) {
        return;
    }
    else {
        inorden(r->izq);
        cout << r->id << " - ";
        inorden(r->der);
    }
}

void ArbolCiudad::inorden() {
    inorden(raiz);
    cout << endl;
}

void ArbolCiudad::postorden(NodoCiudad* r) {
    if (r == NULL) {
        return;
    }
    else {
        postorden(r->izq);
        postorden(r->der);
        cout << r->nombre << " - ";
    }
}

void ArbolCiudad::postorden() {
    postorden(raiz);
    cout << endl;
}

void ArbolCiudad::cargarCiudades(ArbolPais aPaises) {
    ifstream archivo("Ciudades.txt");
    string line;

    while (getline(archivo, line)) {
        stringstream ss(line);
        string temp;
        int idP, idC;
        string name;

        getline(ss, temp, ';');
        idP = stoi(temp);

        getline(ss, temp, ';');
        idC = stoi(temp);

        getline(ss, name, ';');

        insertar(idC, idP, name, paises);
    }
    archivo.close();
}


NodoCiudad* ArbolCiudad::eliminarNodo(NodoCiudad* raiz, int id, int idPais) {
    if (raiz == NULL) {
        return raiz;
    }

    if (id <= raiz->id) {
        raiz->izq = eliminarNodo(raiz->izq, id, idPais);
    }
    else if (id > raiz->id) {
        raiz->der = eliminarNodo(raiz->der, id, idPais);
    }
    else {
        if (raiz->izq == NULL || raiz->der == NULL) {
            NodoCiudad* temp = raiz->izq ? raiz->izq : raiz->der;

            if (temp == NULL) {
                temp = raiz;
                raiz = NULL;
            }
            else {
                *raiz = *temp;
            }
            delete temp;
        }
        else {
            NodoCiudad* temp = nodoMasIzquierdo(raiz->der);
            raiz->id = temp->id;
            raiz->idPais = temp->idPais;
            raiz->nombre = temp->nombre;
            raiz->der = eliminarNodo(raiz->der, temp->id, temp->idPais);
        }
    }

    if (raiz == NULL) {
        return raiz;
    }

    // Actualizar el factor de equilibrio y reequilibrar
    // (aqu�� se implementar��an las rotaciones seg��n el factor de equilibrio)

    return raiz;
}

NodoCiudad* ArbolCiudad::nodoMasIzquierdo(NodoCiudad* nodo) {
    NodoCiudad* actual = nodo;

    while (actual->izq != NULL) {
        actual = actual->izq;
    }

    return actual;
}

void ArbolCiudad::eliminar(int id, int idPais) {
    if (!existeCiudad(id, idPais)) {
        cout << "La ciudad no existe en el ��rbol." << endl;
    }
    else {
        raiz = eliminarNodo(raiz, id, idPais);
        cout << "La ciudad con ID " << id << " del pa��s con ID " << idPais << " ha sido eliminada." << endl;
    }
}
