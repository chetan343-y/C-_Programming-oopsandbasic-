#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int pass,score;
    cout<<"Enter the value of Score : ";
    cin>>score;
    pass=(score>40)?1:0;
    cout<<pass<<endl;

    // Addition
    int a=10,b=20;
    cout<<"Addition ="<<(a+b)<<endl;
    // Subraction
     cout<<"Subraction ="<<(a-b)<<endl;
    //Division
     cout<<"Division ="<<(a/b)<<endl;
    //Multipliaction
    cout<<"Multiplication ="<<(a*b)<<endl;
    //Modulus
     cout<<"Modulus ="<<(a%b)<<endl;

    return 0;
}