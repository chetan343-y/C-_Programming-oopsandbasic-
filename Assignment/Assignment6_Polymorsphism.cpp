#include<bits/stdc++.h>
using namespace std;

class Complex_numbers{
    int img,real;
    public:
    Complex_numbers(){
        real=0;img=0;
    }

    Complex_numbers(int a,int b){
        real=a;
        img=b;
    }
  void display(void){
    cout<<endl<<real<<" + "<<img<<"i"<<endl;
  }
    Complex_numbers operator + ( const Complex_numbers& );
};

//operator Overloading
Complex_numbers Complex_numbers ::operator +(const Complex_numbers& x){
    Complex_numbers z;
    z.real=real+x.real;
    z.img=img+x.img;
    return z;
}

//function Overloading
int greatestNumber(int a,int b){
    if(a>b)
    return a;
 return b;
}

float greatestNumber(float a,float b){
    if(a>b)
    return a;
return b;
}

int main(){
//Demonstrate the exapmle of function overloading
int a=100,b=2000;
float c=1.222,d=1.2223;
cout<<greatestNumber(a,b);
cout<<"\n"<<greatestNumber(c,d);

//Demonstrate the example of Operator overloading
Complex_numbers a1(10,2),b1(3,4),c1;
c1=a1+b1;
c1.display();

    return 0;
}