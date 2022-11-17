#include <iostream>

#include "nodoT.h"

using namespace std;
/*
// nodo usado antes 
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

void add(nodo* head, nodo* nuevo,int where){
    //nodo* aux = head;
    for(int i = 0; i<where-1; i++){head=head->next;}
    nuevo->prev = head;
    nuevo->next = head->next;
    head->next->prev = nuevo;
    head->next = nuevo;
}


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

typedef int(*ppf)(int,int);*/

int main() {
    /*

    int (*pf[2][2])(int,int) = {{sum,res},{mul,divi}};// Sin typedef
    //ppf pf[2][2] = {{sum,res},{mul,divi}};// Con typedef
    for(int (*(*pfn)[2])(int,int) = pf; pfn<pf+2; pfn++){
        for(int (**pfn2)(int,int) = *pfn; pfn2<=*pfn+1; pfn2++){
            c = (**pfn)(a,b);
            cout<<c<<endl;
        }
        //
        //
    }
    */

    /*
    int (*pf[2][2])(int,int) = {{sum,res},{mul,divi}};// Sin typedef
    //ppf pf[2][2] = {{sum,res},{mul,divi}};

    for(ppf (*i)[2] = pf; i<pf+2; i++){
        for(ppf *j = *i; j<*(i+1); j++){
            c = (*j)(a,b);
            cout <<c<< " ";
        }
        cout << endl;
    }
    */


    /*
    int (*pf)(int,int) = sum;
    ppf * p = &pf;// puntero a puntero a función
    */

    
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};

    Nodo<int>* head = nullptr;
    Lista<int>* le = new Lista<int>;
    for (int i {0}; i<12; i++)
        head = new Nodo<int>(a[i],head); //Crea una lists de atras hacia adelante 
    le->head = head;
    le->print();
    Nodo<int>* pos;
    if(le->find(7,pos)){
        std::cout << "7 : " << pos->valor;
    }
    


    for(Nodo<int>* i = head; head ;i=head){ // Inicializa Lista enlazada 
        head=head->next;
        delete i;
    }

    
    /*
    nodo* head;
    //nodo* head = arrtole(head,a,a+11);
    nodo* tail;
    arrtoLE(a,a+11,head,tail);
    printdes(tail);
    
    nodo* nuevo = new nodo;
    nuevo->valor = 9;
    //add(head,nuevo,5);
    
    printas(head);
    */
    
    /*
    printArr(a,a+12);
    cout << endl;
    cout << endl;
    SPLIT(a,a+11,par);
    printArr(a,a+12);
    */
    }