#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  int *c ;
  int a=10;
  c=&a;
  cout<<c<<" "<<&a<<" "<<*c<<" "<<*c+1<<" "<<a<<" "<<&c<<" "<<**&c;
return 0;
    
}