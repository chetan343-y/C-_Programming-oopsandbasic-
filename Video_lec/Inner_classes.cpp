#include<bits/stdc++.h>
using namespace std;

class A{//Outer class
    public :
    int a;
    class C{//Inner Class 
        public : int c,d;
        void print(){
    c=0;d=0;
    cout<<c<<d<<u;
        }  
    };
    C c;
      static int u;
};
int A:: u=0;
int main(){
    A l;
    l.c.print();
    return 0;

}