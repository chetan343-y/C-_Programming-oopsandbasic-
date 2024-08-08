#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// struct complex_numbers{
//     int real,imag;
  
// };

// complex_numbers adding_complex(complex_numbers a,complex_numbers b){
//  complex_numbers c;
//  c.real=a.real+b.real;
//  c.imag=a.imag+b.imag;
//  return c;
// }


struct emplaoyees{
    string name;
    int age,salary;
    float performance;
};

int main(){
//     complex_numbers a,b,c;
//  cout<<"enter the real and imaginary parts of the complx no's respectively "<<endl;
//  cin>>a.real>>a.imag;
//  cin>>b.real>>b.imag;
//  cout<<" Adding .... \n";
//  c =adding_complex(a,b);
//  cout<<c.real<<" + "<<c.imag<<"i \n";

int n;
cout<<"Enter total number of emplaoyees"<<endl;
cin>>n;
emplaoyees record[n];
for(int i=0;i<n;i++){
    cin>>record[i].name>>record[i].age>>record[i].salary>>record[i].performance;
}
for(int i=0;i<n;i++){
    cout<<"\nName: "<<record[i].name<<"\nAge: "<<record[i].age<<"\nSalary: "<<record[i].salary<<"\nPerformance: "<<record[i].performance<<"\n";
}
return 0;
}