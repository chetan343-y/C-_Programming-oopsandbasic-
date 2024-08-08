#include<bits/stdc++.h>
using namespace std;

class Parent{

    public: 
        int a;
    Parent(){
            cout<<"Parent Default constructor is called!!!"<<endl;
        a=0;
    }
    Parent(int x){
        a=x;
            cout<<"Parent Parameterized constructor is called!!!"<<endl;
    }
};

class Child:public Parent{
    int u;
    public:
    Child(){
        cout<<"Child Default constructor is called!!!"<<endl;
        u=0;
    }
    Child(int y,int o):Parent(o){
        u=y;
            cout<<"Child Parameterized constructor is called!!!"<<endl;
    }

    void printdefault(void){
        cout<<"x:"<<u<<" "<<"a:"<<Parent::a<<endl;
    }

     void printParametrized(void){
        cout<<"x:"<<u<<" "<<"a:"<<Parent::a<<endl;
    }
};

int main(){

 Child c(1,2);
 c.printParametrized();
    return 0;
}