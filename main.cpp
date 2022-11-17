#include <iostream>
#include "NodoT.cpp"
#include "Functores.cpp"

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

    // ----- Functores -------

    functor1<int> c(3);
    cout << c(5) << "\n";
    
    



    // ----- Losta enlazada ------
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