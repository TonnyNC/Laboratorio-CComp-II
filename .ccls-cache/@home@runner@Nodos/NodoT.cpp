#include <iostream>

#include "nodoT.h"

// -------- LE del profe --------

template <class T>
void LE<T>::print(){
    for (Nodo<T>* p=head;p;p=p->next){
        std::cout<<p->valor << " \n";

    }

}

template <class T>
bool LE<T>::find(T valor, Nodo<T>*& pos){
    bool encontrado = false;
    pos = nullptr;
    Nodo<T>* p = head;
    for(; p && (p->valor)<valor ; pos=p,p=p->next);
    if(p && p->valor == valor)
        encontrado = true;
    return encontrado;
}

template <class T>
void LE<T>::add(T valor){
    //
}

// --------- Mi LE ----------

template <class T>
void Lista<T>::print(){
    for (Nodo<T>* p=head;p;p=p->next){
        std::cout<<p->valor << " \n";

    }

}

template <class T>
bool Lista<T>::find(T valor, Nodo<T>*& pos){
    pos=head;
    if(!(head->next))
        return false;
    for(; pos->next; pos=pos->next){
        if(pos->next->valor==valor){
            return true;
        }
    }
    return false;
}
