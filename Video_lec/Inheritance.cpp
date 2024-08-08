#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Parent{
    int x;
    protected: int y;
    public:
    int z,a;
};

class child:public Parent{//access specifier : private,public,protected
    private : int q;
    public: int c,d;

    void setValues(int w,int e,int r,int t,int k,int u){
    y=w; z=e;a=r;q=t;c=k;d=u;
    }
    void display(void){
        cout<<y<<" "<<z<<" "<<a<<" "<<q<<" "<<c<<" "<<d<<" ";
    }
};

int main(){
  child c;
  c.setValues(1,2,3,4,5,6);
  c.display();

return 0;
}