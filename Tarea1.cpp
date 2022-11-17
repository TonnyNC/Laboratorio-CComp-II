#include <iostream>

using namespace std;

//nodo usado antes 
struct nodo {
    int valor;
    nodo* next,* prev;
};


void printas(nodo* head) {// imprimer desde el head al tail 
    for(nodo* i = head ; i; i = i->next) {
        cout<< i->valor <<" ";
    }
    cout<<endl;
}

void printdes(nodo* tail) {// imprime desde tail hasta head 
    for(nodo* i = tail ; i; i = i->prev) {
        cout<< i->valor <<" ";
    }
    cout<<endl;
}

nodo* arrtole(int* ini, int* fin) {// solo se usa 1 puntero head
    
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




void arrtoLE(int* ini, int* fin, nodo*&head, nodo*&tail) {// usa 2 punteros head y tail
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

void SPLIT(int* ini , int* fin , bool(*pf)(int)){
    int size = fin-ini + 1;
    
    int* aux = ini;
    while(ini<fin){
        if(pf(*ini)){
            swapP(aux,ini);
            aux++;
            for(int * p = aux; p<ini ;p++){
                swapP(p,ini);
                
            }
        }
       ini++;
    }
}

void printArr(int * ini, int * fin){
    for(;ini<fin;ini++)
        cout << *ini << " ";
}

typedef int(*ppf)(int,int);