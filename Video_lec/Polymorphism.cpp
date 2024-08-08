#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//function Overloading
int findGreatest(int,int,int);
float findGreatest(float,float,float);

// class complex_numbers{//constructor ,destructor,mutator,accessors,enquiry,facilitators,inline function
//     private: int real,img;
//     public:
//     //Constructor OverLoading
//     complex_numbers(){
//         real=0;
//         img=0;
//     }

//   complex_numbers(int x,int y){
//         real=x;
//         img=y;
//     }

//     complex_numbers(const complex_numbers &z){
//         real=z.real;
//         img=z.img;
//     }

//     void setValues(int,int);//mutator
//     bool isReal(void);//enquiry
//     complex_numbers find_product(complex_numbers);//facilitator
// complex_numbers operator + (const complex_numbers&);//Operator Overloading
 


//   inline  void display(void);//accesor
// };
// void complex_numbers::display(void){
//     cout<<real<<" + "<<img<<"i"<<endl;
// }

// void complex_numbers::setValues(int a ,int b){
//     real=a;img=b;
// }

// bool complex_numbers::isReal(void){
//     if(img==0)
//     return 1;
//  return 0;
// }

// complex_numbers complex_numbers::find_product(complex_numbers x){
//     complex_numbers z;
//     z.real=real*x.real -img*x.img;
//     z.img=img*x.real+real*x.img;
//     return z;
// }

// complex_numbers complex_numbers::operator +(const complex_numbers& a){
//     complex_numbers c;
//     c.real=real+a.real;
//     c.img=img+a.img;
//     return c;
// }


int main(){
  int a=1,b=2,c=3;
  float x=1.1,y=2.2,z=3.3;
  cout<<findGreatest(a,b,c);
  cout<<"\n"<<findGreatest(x,y,z);
// complex_numbers a,b,c;
// a.setValues(1,2);
// b.setValues(3,4);
// a.display();
// b.display();
// c=a.find_product(b);
// c.display();
// cout<<c.isReal()<<endl;

// complex_numbers a;//pointers to object
// a.setValues(1,2);
// complex_numbers *b;
// b=&a;
// b->display();//arrow operator
return 0;
}

int findGreatest(int a,int b,int c){
    if(a>=b){
        if(a>=c)
        return a;
     else 
     return c;
    }
    else {
        if(b>=c)
        return b;
    else 
    return c;
    }
}

float findGreatest(float a,float b,float c){
    if(a>=b){
        if(a>=c)
        return a;
     else 
     return c;
    }
    else {
        if(b>=c)
        return b;
    else 
    return c;
    }
}