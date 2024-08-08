#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//try,throw,catch
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
        throw 1;
    cout<<a/b<<endl;
    }
  catch(int e){
    cout<<"An error as occur in the code ,Divide by Zero: "<<e<<endl;
  }
return 0;
}