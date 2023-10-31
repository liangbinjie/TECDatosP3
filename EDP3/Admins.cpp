#include "Admins.h"

nodoB::nodoB(int t1, bool leaf1)
{
    // Copy the given minimum degree and leaf property
    t = t1;
    leaf = leaf1;

    // Allocate memory for maximum number of possible keys
    // and child pointers
    keys = new int[2 * t - 1];
    C = new nodoB * [2 * t];

    // Initialize the number of keys as 0
    n = 0;
}

void nodoB::traverse()
{
    // There are n keys and n+1 children, traverse through n keys
    // and first n children
    int i;
    for (i = 0; i < n; i++)
    {
        // If this is not leaf, then before printing key[i],
        // traverse the subtree rooted with child C[i].
        if (leaf == false)
            C[i]->traverse();
        cout << " " << keys[i];
    }

    // Print the subtree rooted with last child
    if (leaf == false)
        C[i]->traverse();
}

nodoB* nodoB::search(int k)
{
    // Find the first key greater than or equal to k
    int i = 0;
    while (i < n && k > keys[i])
        i++;

    // If the found key is equal to k, return this node
    if (keys[i] == k)
        return this;

    // If key is not found here and this is a leaf node
    if (leaf == true)
        return NULL;

    // Go to the appropriate child
    return C[i]->search(k);
}

void arbolAdmins::insert(int k)
{
    // If tree is empty
    if (root == NULL)
    {
        // Allocate memory for root
        root = new nodoB(t, true);
        root->keys[0] = k;  // Insert key
        root->n = 1;  // Update number of keys in root
    }
    else // If tree is not empty
    {
        // If root is full, then tree grows in height
        if (root->n == 2 * t - 1)
        {
            // Allocate memory for new root
            nodoB* s = new nodoB(t, false);

            // Make old root as child of new root
            s->C[0] = root;

            // Split the old root and move 1 key to the new root
            s->splitChild(0, root);

            // New root has two children now.  Decide which of the
            // two children is going to have new key
            int i = 0;
            if (s->keys[0] < k)
                i++;
            s->C[i]->insertNonFull(k);

            // Change root
            root = s;
        }
        else  // If root is not full, call insertNonFull for root
            root->insertNonFull(k);
    }
}

void nodoB::insertNonFull(int k)
{
    // Initialize index as index of rightmost element
    int i = n - 1;

    // If this is a leaf node
    if (leaf == true)
    {
        // The following loop does two things
        // a) Finds the location of new key to be inserted
        // b) Moves all greater keys to one place ahead
        while (i >= 0 && keys[i] > k)
        {
            keys[i + 1] = keys[i];
            i--;
        }

        // Insert the new key at found location
        keys[i + 1] = k;
        n = n + 1;
    }
    else // If this node is not leaf
    {
        // Find the child which is going to have the new key
        while (i >= 0 && keys[i] > k)
            i--;

        // See if the found child is full
        if (C[i + 1]->n == 2 * t - 1)
        {
            // If the child is full, then split it
            splitChild(i + 1, C[i + 1]);

            // After split, the middle key of C[i] goes up and
            // C[i] is splitted into two.  See which of the two
            // is going to have the new key
            if (keys[i + 1] < k)
                i++;
        }
        C[i + 1]->insertNonFull(k);
    }
}

void nodoB::splitChild(int i, nodoB* y)
{
    // Create a new node which is going to store (t-1) keys
    // of y
    nodoB* z = new nodoB(y->t, y->leaf);
    z->n = t - 1;

    // Copy the last (t-1) keys of y to z
    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    // Copy the last t children of y to z
    if (y->leaf == false)
    {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    // Reduce the number of keys in y
    y->n = t - 1;

    // Since this node is going to have a new child,
    // create space of new child
    for (int j = n; j >= i + 1; j--)
        C[j + 1] = C[j];

    // Link the new child to this node
    C[i + 1] = z;

    // A key of y will move to this node. Find the location of
    // new key and move all greater keys one space ahead
    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    // Copy the middle key of y to this node
    keys[i] = y->keys[t - 1];

    // Increment count of keys in this node
    n = n + 1;
}

nodo::nodo(int cedula, string nombre) {
    this->cedula = cedula;
    this->nombre = nombre;
    siguiente = NULL;
}

listaAdmins::listaAdmins() {
    raiz = NULL;
}

void listaAdmins::insertar(int cedula, string nombre) {
    if (raiz == NULL) {
        raiz = new nodo(cedula, nombre);
    }
    else {
        if (!existe(cedula)) {
            pnodo aux = raiz;
            while (aux->siguiente != NULL) {
                aux = aux->siguiente;
            }
            aux->siguiente = new nodo(cedula, nombre);
        }
        
    }
}

void listaAdmins::mostrar() {
    if (raiz == NULL) {
        cout << "No hay nada" << endl;
    }
    else {
        pnodo aux = raiz;
        while (aux) {
            cout << aux->nombre << " - ";
            aux = aux->siguiente;
        }
    }
}

bool listaAdmins::existe(int cedula) {
    pnodo aux = raiz;
    mostrar();
    while (aux) {
        if (aux->cedula == cedula) {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}

string listaAdmins::buscar(int cedula) {
    if (raiz == NULL) {
        cout << "No hay nada" << endl;
        return "";
    }
    else {
        pnodo aux = raiz;
        while (aux) {
            if (aux->cedula == cedula) {
                cout << aux->nombre << endl;
                return aux->nombre;
            }
            aux = aux->siguiente;
        }
        return "";
    }
}

void listaAdmins::modificar(int cedula, string nombreNuevo) {
    if (raiz == NULL) {
        cout << "No hay nada" << endl;
    }
    else {
        pnodo aux = raiz;
        while (aux) {
            if (aux->cedula == cedula) {
                aux->nombre = nombreNuevo;
                return;
            }
            aux = aux->siguiente;
        }
    }
}


void listaAdmins::eliminar(int cedula) {
    if (raiz == NULL) {
        cout << "No hay nada" << endl;
    }
    else {
        if (cedula == raiz->cedula) {
            pnodo temp = raiz;
            raiz = raiz->siguiente;
            delete temp;
            return;
        }
      
        pnodo temp = raiz;
        while (temp->siguiente && temp->siguiente->cedula != cedula) {
            temp = temp->siguiente;
        }
        if (temp->siguiente) {
            pnodo nodoEliminar = temp->siguiente;
            temp->siguiente = nodoEliminar->siguiente;
            delete nodoEliminar;
            return;
        }
    }
}

void listaAdmins::cargarAdmins() {
    ifstream archivo("Administradores.txt");
    string line;

    while (getline(archivo, line)) {
        stringstream ss(line);
        string temp;
        int cedula;
        string name;

        getline(ss, temp, ';');
        cedula = stoi(temp);

        getline(ss, name, ';');

        insertar(cedula, name);
    }
    archivo.close();
}

void listaAdmins::cargarClientes() {
    ifstream archivo("Clientes.txt");
    string line;

    while (getline(archivo, line)) {
        stringstream ss(line);
        string temp;
        int cedula;
        string name;

        getline(ss, temp, ';');
        cedula = stoi(temp);

        getline(ss, name, ';');

        insertar(cedula, name);
    }
    archivo.close();
}