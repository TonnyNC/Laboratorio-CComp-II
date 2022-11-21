#pragma once

template <class T>
struct Nodo {
    T valor;
    Nodo<T>* next,* prev; 
    Nodo(T v, Nodo * n = nullptr){
        valor = v;
        next = n;
    }

};

// --------------- La LE del profesor

template <class T>
struct LE {
    Nodo<T> * head = nullptr; 
    void add(T valor);
    void del(T valor);
    void print();
    bool find(T valor, Nodo<T>*& pos);
    ~LE();
};

// --------- Mi Lista --------------- 

template <class T>
struct Lista {
    Nodo<T> * head = nullptr; 
    void add(T valor);
    void del(T valor);
    void print();
    bool find(T valor, Nodo<T>*& pos);
    ~Lista();
};