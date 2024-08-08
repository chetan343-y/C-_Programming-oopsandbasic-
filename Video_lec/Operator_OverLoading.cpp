#include<bits/stdc++.h>
using namespace std;

class complex_numbers{//constructor ,destructor,mutator,accessors,enquiry,facilitators,inline function
    private: int real,img;
    public:
    //Constructor OverLoading
    complex_numbers(){
        real=0;
        img=0;
    }

  complex_numbers(int x,int y){
        real=x;
        img=y;
    }

    complex_numbers(const complex_numbers &z){
        real=z.real;
        img=z.img;
    }

    void setValues(int,int);//mutator
    bool isReal(void);//enquiry
    complex_numbers find_product(complex_numbers);//facilitator


complex_numbers operator + (const complex_numbers&);//Operator Overloading
complex_numbers operator * (const complex_numbers&);
complex_numbers operator - (const complex_numbers&);

//operator overloading using friend function
friend complex_numbers operator -(const complex_numbers&,const complex_numbers&);
  inline  void display(void);//accesor
};
void complex_numbers::display(void){
    cout<<real<<" + "<<img<<"i"<<endl;
}

void complex_numbers::setValues(int a ,int b){
    real=a;img=b;
}

bool complex_numbers::isReal(void){
    if(img==0)
    return 1;
 return 0;
}

complex_numbers complex_numbers::find_product(complex_numbers x){
    complex_numbers z;
    z.real=real*x.real -img*x.img;
    z.img=img*x.real+real*x.img;
    return z;
}

complex_numbers complex_numbers::operator +(const complex_numbers& a){
    complex_numbers c;
    c.real=real+a.real;
    c.img=img+a.img;
    return c;
}

complex_numbers complex_numbers::operator -(const complex_numbers& a){
    complex_numbers c;
    c.real=real-a.real;
    c.img=img-a.img;
    return c;
}

complex_numbers complex_numbers::operator *(const complex_numbers& a){
    complex_numbers c;
    c.real=real*a.real-img*a.img;
    c.img=a.real*img+real*a.img;
    return c;
}

 complex_numbers operator -(const complex_numbers& x,const complex_numbers& y){
complex_numbers z;
z.real=x.real-y.real;
z.img=x.real-y.img;
return z;
}

int main(){
complex_numbers a,b,c,d,e,f;//pointers to object
a.setValues(1,2);
b.setValues(2,1);
// complex_numbers *b;
// // b=&a;
// b->display();//arrow operator
// c=a+b;
c=a.operator +(b);
d=b-c;
e=d*c;
f=operator-(a,c);
c.display();
d.display();
e.display();
f.display();
    return 0;
}