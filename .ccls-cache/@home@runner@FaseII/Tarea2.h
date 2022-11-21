#pragma once
#include "nodoT.h"

template <class T>
bool find(Nodo<T>*& pos, Nodo<T>& V){
    if(!(pos->next))
        return false;
    for(; pos->next; pos=pos->next){
        if(pos->next->valor==valor){
            return true;
        }
    }
    return false;
}

template <class T>
void addP(Nodo<T>* pos, Nodo<T>* V){
    Nodo<T>* pos;
    if(!find(nodo, V->valor, pos)){
        if(!pos){
            
            head = new Nodo<T>(V->valor,head);   
        }
        else
            pos->next = new Nodo<T>(V->valor,pos->next);
    }
}

template <class T>
void addN(Nodo<T>*& pos, Nodo<T>* V){
    Nodo<T>* pos;
    if(!find(nodo, V->valor, pos)){
        if(!pos){
            
            head = new Nodo<T>(V->valor,head);   
        }
        else
            pos->next = new Nodo<T>(V->valor,pos->next);
    }
}

template <class T>
void add(Nodo<T>* a, Nodo<T>* b,int where){
    //nodo* aux = head;
    b->next = a->next;
    a->next = b;
}

template <class T>
void Merge(Nodo<T>*& a, Nodo<T>*& b){
    for(Nodo<T>tmp = a ; tmp && b ; tmp=tmp->next , b=b->next){
        if(b->valor < tmp->valor ){
            swapP(tmp,b);
        }
    }
    
    b=nullptr;
}
