#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Office{
    string name,JobPost;
    int age,phoneNO;
  
    public:
      static int  i;
      Office(){
        name="Unknown";
        JobPost="Unknown";
        age=0;
        phoneNO=0;
      }
      void enter_value(string n,string j,int a,int p){
        name=n;
        JobPost=j;
        age=a;
        phoneNO=p;
      }
      void display(){
        cout<<"Details of Employee "<<i+1<<"\n";
        cout<<"Name: "<<name<<"\nJobPost: "<<JobPost<<"\nAge: "<<age<<"\nPhone No.: "<<phoneNO<<"\n";
        i++;
      }
};

int Office::i = ;

int main(){
  
// write a class in c++ store: Name, phoneNO,JobPost,age to store dat of an office emplaoyees

Office a;
a.display();
a.enter_value("Chetan Sharma "," Developer ",21,937258);
a.display();
return 0;
}