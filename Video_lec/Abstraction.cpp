#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{//Abstract Class
    public: int a,b;
    A(){
        a=0; b=0;
    }
//   virtual  void setValues(){//virtual Function
//        cout<<"Base Function"<<endl;
//     }
   
   virtual void setValues()=0;//Pure Virtual Function used to make the class as abstract class
};

class B:public A{
    public: int c,d;
    void setValues(){//function Overriding
          cout<<"Derived Class  Function"<<endl;
    }
   
};

class New:public A{
    public:
       void setValues(){//function Overriding
          cout<<"New Class  Function"<<endl;
    }
   
};

int main(){
  A *b;
  B e;
  b=&e;
  b->setValues();
  New g;
  b=&g;
  b->setValues();
return 0;
}