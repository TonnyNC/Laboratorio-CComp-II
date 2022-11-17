#include<iostream>

using namespace std;

template<class T>
class functor1{
    public:
        T x;
        functor1(T a):x(a){};
        int operator ()(int b){
            return x+b;
        }
};


