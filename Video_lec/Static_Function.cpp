#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Rectangl{
      int len,bre,area;
    public:
  static int count;//static member variable

  static int howMuch_Memory(){
    return (count*12+4);
  }
    Rectangl(){
        len=0;bre=0;area=0;
        count+=12;
    }
    void putvalues(int a,int b){
        len=a;bre=b;
   area=a*b;
    }
    void printArea(void){
        cout<<"Area: "<<area<<endl;
    }
    };

   int  Rectangl:: count=0;

int main(){
    Rectangl a,b,c,d,e,f,g;
  cout<<Rectangl::count<<endl;
  cout<<Rectangl::howMuch_Memory();

return 0;
}