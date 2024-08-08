#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  //a number is pretty if the last digit is 2,3,9 and have open range from l,r stored the value in the vector.
int l,r;
cout<<"Enter the left and right value: ";
cin>>l>>r;
vector <int> v;
for(int i=l+1;i<r;i++){
int temp=i%10;
if(temp==2||temp==3||temp==9)
 v.push_back(i);
}
for(auto i:v)
cout<<i<<" ";
return 0;
}