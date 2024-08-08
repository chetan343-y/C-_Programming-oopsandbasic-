#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{
    public: int a,b;
    A(){
        a=0; b=0;
    }
    void setValues(int x,int y){
        a=x;b=y;
    }
    void printValues(){
        cout<<"a: "<<a<<" & "<<"b: "<<b<<endl;
    }
};

class B:public A{
    public: int c,d;
    void setValues(int x,int y){//function Overriding
        c=x;d=y;
    }
    void printValues(){
        cout<<"a: "<<a<<" "<<"b: "<<b<<" c: "<<c<<" d: "<<d<<endl;
    }
};

int main(){
  A *b;
  B e;
  b=&e;
  b->setValues(1,2);
  b->printValues();
  e.setValues(4,5);
  e.printValues();

return 0;
}