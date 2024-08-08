#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Shape{
    public:
  virtual  void area()=0;
};

class Rectangle:public Shape{
    public:
    int a,b;
    Rectangle(int i,int u){
        a=i;b=u;
    }
    void area(void){
        int area=a*b;
        cout<<"Area of Recatngle: "<<area<<"\n";
    }
};

int main(){
  Rectangle a(1,23);
  a.area();

return 0;
}