#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base Class Constructor is called\n";
    }

    ~Base(){//can override the destructor
        cout<<"Base Class Destructor is called\n";
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived Class Constructor is called\n";
    }
    ~Derived(){
        cout<<"Derived Class Destructor is called\n";
    }
};
int main(){
    Base b;
    cout<<"Done with Base class object  creation\n";
  Derived d;
 cout<<"Done with Derived class object  creation\n";

return 0;
}