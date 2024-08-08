#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class D;
class A{
    int o;
    public:
    int y;
    friend D;
};


class D{//Has A Relationship
    public :
    int a;
    A obj;//ContainerShip
    void printValues(void){
        a=1;
        obj.o=12;
        obj.y=13;
        cout<<a<<" "<<obj.o<<" "<<obj.y<<endl;
    }
};

int main(){
  D g;
  g.printValues();

return 0;
}