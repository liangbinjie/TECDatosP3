#ifndef ADMINS_H
#define ADMINS_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class nodo {
private:
    int cedula;
    string nombre;
    nodo* siguiente;
    friend class listaAdmins;
public:
    nodo(int cedula, string nombre);
};

typedef nodo* pnodo;

class listaAdmins {
private:
    pnodo raiz;
public:
    listaAdmins();
    void insertar(int cedula, string nombre);
    void eliminar(int cedula);
    void modificar(int cedula, string nombreNuevo);
    string buscar(int cedula);
    bool existe(int cedula);
    void mostrar();
    void cargarAdmins();
    void cargarClientes();
};

class nodoB {
    int* keys;  // An array of keys
    int t;      // Minimum degree (defines the range for number of keys)
    nodoB** C; // An array of child pointers
    int n;     // Current number of keys
    bool leaf; // Is true when node is leaf. Otherwise false
public:
    nodoB(int _t, bool _leaf);   // Constructor

    // A utility function to insert a new key in the subtree rooted with
    // this node. The assumption is, the node must be non-full when this
    // function is called
    void insertNonFull(int k);

    // A utility function to split the child y of this node. i is index of y in
    // child array C[].  The Child y must be full when this function is called
    void splitChild(int i, nodoB* y);

    // A function to traverse all nodes in a subtree rooted with this node
    void traverse();

    // A function to search a key in the subtree rooted with this node.
    nodoB* search(int k);   // returns NULL if k is not present.

    // Make BTree friend of this so that we can access private members of this
    // class in BTree functions
    friend class arbolAdmins;
};

class arbolAdmins {
    nodoB* root;
    int t;
public:

    arbolAdmins(int _t)
    {
        root = NULL;  t = _t;
    }

    // function to traverse the tree
    void traverse()
    {
        if (root != NULL) root->traverse();
    }

    // function to search a key in this tree
    nodoB* search(int k)
    {
        return (root == NULL) ? NULL : root->search(k);
    }

    // The main function that inserts a new key in this B-Tree
    void insert(int k);
};

#endif
