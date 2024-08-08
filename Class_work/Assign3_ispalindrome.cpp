#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  string n,re;
  cin>>n;
  for(int i=n.size()-1;i>=0;i--)
 re+=n[i];
if(re==n)
cout<<"is plandromic";
else
cout<<"Not Plandromic";

return 0;
}