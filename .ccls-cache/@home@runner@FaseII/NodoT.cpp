#include <iostream>
#include "nodoT.h"



// -------- LE del profe --------

template <class T>
void LE<T>::print(){
    std::cout << "Head->";
    for (Nodo<T>* p=head;p;p=p->next){
        std::cout<<p->valor << "->";
    }
    std::cout << "nullptr\n";

}

template <class T>
bool LE<T>::find(T valor, Nodo<T>*& pos){
    bool encontrado = false;
    pos = nullptr;
    Nodo<T>* p = head;
    for(; p && (p->valor)>valor ; pos=p,p=p->next);
    if(p && p->valor == valor)
        encontrado = true;
    return encontrado;
}

template <class T>
void LE<T>::add(T valor){
    Nodo<T>* pos;
    if(!find(valor,pos)){
        if(!pos)
            head = new Nodo<T>(valor,head);
        else
            pos->next = new Nodo<T>(valor,pos->next);
    }
}

template <class T>
void LE<T>::del(T valor){
    Nodo<T>* tmp,*pos;
    if(find(valor,pos)){
        if(!pos){
            tmp = head->next;
            delete head;
            head = tmp;
        } else{
            tmp = pos->next;
            pos->next = pos->next->next;
            delete tmp;            
    }}
}
template <class T>
LE<T>::~LE(){
    while (head)
        del(head->valor);
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
};
/*
template <class T>
void LE<T>::add(T valor){
    Nodo<T>* pos;
    bool found = LE<T>find(valor,pos);
    if(head)
    head = new Nodo(valor, head);// inserta al inicio CASO 1 Y 2
    pos->next = new Nodo(valor,pos->next);// inserta en cualquer otro lugar CASO 3 Y 4
    
}
*/