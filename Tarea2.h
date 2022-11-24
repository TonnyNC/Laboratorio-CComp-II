#pragma once
#include "nodoT.h"

template <class T>
void splitN(Nodo<T>*& a, Nodo<T>*& b){
    
}

template <class T>
void swapL(Nodo<T>*& a, Nodo<T>*& b){ //CASO 1 : Swap para el primero Nodo  
    Nodo<T>* aux = a;
    a=b;
    b = b->next;
    a->next = aux;
}

template <class T>
void swapN(Nodo<T>*& a, Nodo<T>*& b){//CASO 2 : Swap entre nodos
    Nodo<T>* aux = a->next;
    a->next=b;
    b = b->next;
    a->next->next = aux;
}

template <class T>
void Merge(Nodo<T>*& a, Nodo<T>*& b){
    Nodo<T>*tmp=a;
    while(b->valor < a->valor){
        swapL(a,b);            
    }
    tmp = a;
    
    for(; tmp->next && b ; tmp=tmp->next){
        if(tmp->next->valor > b->valor){
            swapN(tmp,b);
        }
    }
    
    if(b) // Si b es mas largo que a asigna la cola de b a a
        tmp->next = b; 
    
    b = nullptr;
}
