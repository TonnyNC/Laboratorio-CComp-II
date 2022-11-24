#include <iostream>
#include "NodoT.cpp"
#include "Functores.h"
#include "Tarea1.h"
#include "Tarea2.h"

#define FORN(i,a,b) for(int i = a ; i>=b; i--)

int main() {

    // FUNCION SPLIT PARA EXAMEN CON PUNTERO A FUNCIÓN O FUNCTORES 

    // -------- MERGE ------------

    //int la[] = {12,10,8,6,4,2};
    int la1[] = {2,4,6,8,10,12};
    //int lb[] = {15,13,11,9,7,5,3,1};
    int lb1[] = {1,3,5,7,9,11,13,15};
    Nodo<int>* a;
    Nodo<int>* b;
    
    LE<int>* le = new LE<int>;
    
    FORN(i,7,0){
        b = new Nodo<int>(lb1[i],b);
    }
    FORN(i,5,0){
        a = new Nodo<int>(la1[i],a);
    }

    le->head = a;
    le->print();

    Merge(a,b);

    le->head = a;
    le->print();

    std::cout << "b->"<< b;
    

    
    // ------ Nodos --------
    
    /*
    int a[] = {1,2,3,4,5,6,7,8};
    
    nodo* head = new nodo;
    //nodo* tail = init(head,a,a+7);
    nodo* tail;
    arrtoLE(a,a+7,head,tail);
    printdes(tail);

    printas(head);

    std::cout << "\n\n";
    
    printArr(a,a+8);
    cout << endl;
    SPLIT(a,a+8,inpar);
    printArr(a,a+8);
    */
    
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

    // ----- Functores -------

    /*
    functor1<int> c(3);
    cout << c(5) << "\n";
    */
    



    // ----- Lista enlazada ------
    /*

    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};

    Nodo<int>* head = nullptr;
    LE<int>* le = new LE<int>;
    for (int i {0}; i<12; i++)
        head = new Nodo<int>(a[i],head); //Crea una lists de atras hacia adelante 
    le->head = head;
    le->print();
    Nodo<int>* pos;

    le->del(7);
    le->del(8);

    le->print();
    


    for(Nodo<int>* i = head; head ;i=head){ // Elimina lista enlazada 
        head=head->next;
        delete i;
    }

    */
}