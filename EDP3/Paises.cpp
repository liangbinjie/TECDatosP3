#include "Paises.h"

NodoPais::NodoPais() {
	id = 0;
	nombre = "";
	izq = NULL;
	der = NULL;
}

NodoPais::NodoPais(int pId, string pNombre) {
	id = pId;
	nombre = pNombre;
	izq = NULL;
	der = NULL;
}


ArbolPais::ArbolPais() {
	raiz = NULL;
}

void ArbolPais::insertarAux(NodoPais* r, int id, string nombre) {
	if (r->id > id) {
		if (r->izq == NULL) {
			r->izq = new NodoPais(id, nombre);
		}
		else {
			insertarAux(r->izq, id, nombre);
		}
	}
	if (r->id < id) {
		if (r->der == NULL) {
			r->der = new NodoPais(id, nombre);
		}
		else {
			insertarAux(r->der, id, nombre);
		}
	}
}

void ArbolPais::insertar(int id, string nombre) {
	if (raiz == NULL) {
		raiz = new NodoPais(id, nombre);
		cout << "Nuevo pais insertado" << endl;
	}
	else {
		if (existePais(id)) {
			cout << "Este pais ya existe" << endl;
		}
		else {
			insertarAux(raiz, id, nombre);
			cout << "Nuevo pais insertado" << endl;
		}
	}
}


NodoPais* ArbolPais::buscarAux(NodoPais* r, int id) {
	if (r == NULL || r->id == id) {
		return r;
	}

	if (id < r->id) {
		return buscarAux(r->izq, id);
	}
	else {
		return buscarAux(r->der, id);
	}
}

string ArbolPais::buscar(int id) {
	NodoPais* buscado = buscarAux(raiz, id);
	if (buscado == NULL) {
		cout << "No existe este pais" << endl;
		return "";
	}
	else {
		cout << "ID: " << buscado->id << "\nNombre: " << buscado->nombre << endl;
		return  buscado->nombre;
	}
}




NodoPais* ArbolPais::punteroPais(int id) {
	NodoPais* buscado = existeAux(raiz, id);

	return buscado;
}



NodoPais* ArbolPais::modificarAux(NodoPais* r, int id, string nombre) {
	if (r->id == id) {
		r->nombre = nombre;
		return r;
	}

	if (id < r->id) {
		return modificarAux(r->izq, id, nombre);
	}
	else {
		return modificarAux(r->der, id, nombre);
	}
}

void ArbolPais::modificar(int id, string nombre) {

	if (!existePais(id)) {
		cout << "No existe este pais" << endl;
	}
	else {
		NodoPais* buscado = modificarAux(raiz, id, nombre);
		cout << "Nombre modificado" << endl;
		cout << "ID: " << buscado->id << "\nNombre: " << buscado->nombre << endl;
	}
}

NodoPais* ArbolPais::existeAux(NodoPais* r, int id) {
	if (r == NULL || r->id == id) {
		return r;
	}

	if (id < r->id) {
		return existeAux(r->izq, id);
	}
	else {
		return existeAux(r->der, id);
	}
}

bool ArbolPais::existePais(int id) {
	NodoPais* buscado = existeAux(raiz, id);
	if (buscado == NULL) {
		return false;
	}
	else {
		return true;
	}
}


void ArbolPais::preorden(NodoPais* r) {
	if (r == NULL) {
		return;
	}
	else {
		cout << r->id << " - ";
		preorden(r->izq);
		preorden(r->der);
	}
}

void ArbolPais::preorden() {
	preorden(raiz);
	cout << endl;
}


void ArbolPais::cargarPais() {
	ifstream archivo("Paises.txt");
	string line;

	while (getline(archivo, line)) {
		stringstream ss(line);
		string temp;
		int idP;
		string name;

		getline(ss, temp, ';');
		idP = stoi(temp);

		getline(ss, name, ';');

		insertar(idP, name);
	}
	archivo.close();
}

void ArbolPais::reporte() {
	ofstream archivo;
	archivo.open("reportes/paises.txt");
	reporte(raiz, archivo);
	archivo.close();
}

void ArbolPais::reporte(NodoPais* r, ofstream& archivo) {
	if (r == NULL) {
		return;
	}
	else {
		archivo << "ID: " << r->id << " | Nombre: " << r->nombre << endl;
		reporte(r->izq, archivo);
		reporte(r->der, archivo);
	}
}

NodoPais* ArbolPais::eliminarAux(NodoPais* r, int id) {
	std::ofstream outfile;
	if (r == NULL) {
		return r;
	}

	if (id < r->id) {
		r->izq = eliminarAux(r->izq, id);
	}
	else if (id > r->id) {
		r->der = eliminarAux(r->der, id);
	}
	else {
		// Nodo con un solo hijo o sin hijos
		if (r->izq == NULL) {
			NodoPais* temp = r->der;
			outfile.open("reportes/paisesEliminados.txt", std::ios_base::app); // append instead of overwrite
			outfile << r->nombre << endl;;
			delete r;
			return temp;
		}
		else if (r->der == NULL) {
			NodoPais* temp = r->izq;


			outfile.open("reportes/paisesEliminados.txt", std::ios_base::app); // append instead of overwrite
			outfile << r->nombre << endl;
			delete r;
			return temp;
		}

		// Nodo con dos hijos
		NodoPais* temp = nodoMinimo(r->der);

		r->id = temp->id;
		r->nombre = temp->nombre;

		r->der = eliminarAux(r->der, temp->id);
	}
	return r;
}

void ArbolPais::eliminar(int id) {
	if (!existePais(id)) {
		cout << "No existe este pa¨ªs" << endl;
	}
	else {
		raiz = eliminarAux(raiz, id);
		cout << "Pa¨ªs eliminado" << endl;
	}
}

NodoPais* ArbolPais::nodoMinimo(NodoPais* nodo) {
	NodoPais* actual = nodo;

	while (actual && actual->izq != NULL) {
		actual = actual->izq;
	}

	return actual;
}
