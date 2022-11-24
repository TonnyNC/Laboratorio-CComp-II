#pragma once
#include <iostream>

struct nodo {
    int valor;
    nodo* next,* prev;
};

void printas(nodo* head) {// imprimer desde el head al tail 
    for(nodo* i = head ; i; i = i->next) {
        std::cout<< i->valor <<" ";
    }
    std::cout<<std::endl;
}

void printdes(nodo* tail) {// imprime desde tail hasta head 
    for(nodo* i = tail ; i; i = i->prev) {
       std:: cout<< i->valor <<" ";
    }
    std::cout<<std::endl;
}

void swapv(nodo* &a, nodo* &b){
    int aux = a->valor;
    a->valor = b->valor;
    b->valor = aux;
    
}

void swapdir(nodo* &a, nodo* &b){
    nodo* aux = new nodo;
    aux->next = a->next;
    aux->prev = a->prev;
    
    a->next = b->next;
    a->prev= b->prev;
    
    b->next = aux->next;
    b->prev = aux->prev;
}

/*
nodo* init(nodo* head, int* ini, int* fin) {
    nodo* i = head;
    head->prev = nullptr;
    for( ; ini<=fin ; ini++) {
        i->valor = *ini;
        if(ini!=fin) {
            i->next = new nodo;
            i->next->prev = i;
            i = i->next;
        }

    }
    i->next = nullptr;
    return i;
}
*/
/*
nodo* init(int* ini, int* fin) {// solo se usa 1 puntero
    nodo* i = new nodo;
    i->prev = nullptr;
    for( ; ini<=fin ; ini++) {
        i->valor = *ini;
        if(ini!=fin) {
            i->next = new nodo;
            i->next->prev = i;
            i = i->next;
        }

    }
    i->next = nullptr;
    return i;
}
*/

nodo* arrtole1(int* ini, int* fin) {// solo se usa 1 puntero
    nodo* i = new nodo;
    nodo* head = i;
    i->prev = nullptr;
    for( ; ini<=fin ; ini++) {
        i->valor = *ini;
        if(ini!=fin) {
            i->next = new nodo;
            i->next->prev = i;
            i = i->next;
        }
    }
    i->next = nullptr;
    return head;
}




void arrtoLE(int* ini, int* fin, nodo*&head, nodo*&tail) {// usa 2 punteros
    nodo* i = new nodo;
    head = i;
    i->prev = nullptr;
    for( ; ini<=fin ; ini++) {
        i->valor = *ini;
        if(ini!=fin) {
            i->next = new nodo;
            i->next->prev = i;
            i = i->next;
        }
    }
    i->next = nullptr;
    tail = i;
}




nodo* init(nodo* head ,int* ini, int* fin){ //
    nodo* i = head;
    i->prev = nullptr;
    for( ; ini<=fin ; ini++) {
        i->valor = *ini;
        if(ini!=fin) {
            i->next = new nodo;
            i->next->prev = i;
            i = i->next;
        }

    }
    i->next = nullptr;
    return i;
}

void add(nodo* head, nodo* nuevo,int where){
    //nodo* aux = head;
    for(int i = 0; i<where-1; i++){head=head->next;}
    nuevo->prev = head;
    nuevo->next = head->next;
    head->next->prev = nuevo;
    head->next = nuevo;
}

/*
int sum(int a, int b) {
    return a+b;
}
int res(int a, int b) {
    return a-b;
}
int mul(int a, int b) {
    return a*b;
}
int divi(int a, int b) {
    return (int)(a/b);
}
*/

bool par(int a){
    return (a%2 == 0);
}
bool inpar(int a){
    return (a%2 != 0);
}

void swapP(int * a, int * b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void SPLIT(int* ini, int* fin ,bool(*pf)(int)){
    int size = fin-ini + 1;
    for(int* aux = ini;ini<fin; ini++){
        if(pf(*ini)){
            swapP(aux,ini);
            aux++;
            for(int * p = aux; p<ini ;p++){
                swapP(p,ini);
                
            }
        }
        
    }
}

void printArr(int * ini, int * fin){
    for(;ini<fin;ini++)
        std::cout << *ini << " ";
}

