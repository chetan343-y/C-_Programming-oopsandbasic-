#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  
string name="Chetan ";

cout<<name.size()<<" "<<name.length()<<endl;
for(auto i:name )
 { 
 cout<<i<<" ";
 }
cout<<endl;
 for(int i=0;i<name.size()-1;i++)
 {
    if(name[i]=='a'|| name[i]=='e' || name[i]=='i'|| name[i]=='o'|| name[i]=='u'|| name[i]=='A'|| name[i]=='E'|| name[i]=='I'|| name[i]=='O'|| name[i]=='U')
    continue;
    else
    cout<<name[i];
 }
 cout<<endl;
 string fullname=name+" Sharma";
 cout<<fullname;
return 0;
    
}