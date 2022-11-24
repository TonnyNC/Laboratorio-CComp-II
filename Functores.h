#include<iostream>

class suma{
    int x;
    public:
        suma(int a):x(a){};
        int operator ()(int b){
            return x+b;
        }
};

template<class T>
class fibo{
    public:
        //
};


