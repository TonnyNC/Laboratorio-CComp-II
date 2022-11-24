#pragma once
#include <iostream>

using namespace std;

struct asc
{
  bool operator()(int a, int b)
  {return a<b;}
};

struct desc
{
  bool operator()(int a, int b)
  {return a>b;}
};

template <class T>
struct Nodo {
    T valor;
    Nodo<T>* next,* prev;
    Nodo(T v, Nodo* n = nullptr){
        valor = v;
        next = n;
    }

};

template <class T>
void crear(int *p, Nodo<T>*& lista)
{
  lista = new Nodo<T>(*p);
  p++;
   for(nodo* n =lista;*p>0;p++,n=n->next)
     n->next = new Nodo<T>(*p);
     
}

template <class T>
void print(Nodo<T> *lista)
{
  cout<<"lista -> ";
  for(;lista;lista=lista->next)
     cout<<lista->valor<<" -> ";
  cout<<"NULL"<<endl;
}

template<typename T>
void ordenar(Nodo<T>*& lista, T comp)
{
  //por hacer
}

int main() {
  int A[] = {7,7,27,7,12,9,18,9,8,7,-1};
  Nodo<int> *miLista;

  crear(A,miLista);
  print(miLista);

  //orden asc
  ordenar(miLista,asc());
  print(miLista);

//orden desc
  ordenar(miLista,desc());
  print(miLista);

}

