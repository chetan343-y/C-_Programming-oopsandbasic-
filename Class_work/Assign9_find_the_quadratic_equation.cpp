#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    int subject;
    string Name;
    int roll_no1;
    public:
    static int roll_no;
    Student(){
        Name="None";
        subject=0;
          roll_no++;
          roll_no1=roll_no;
    }

    Student(int x,string y)
    {Name=y;
    subject=x;
    roll_no++;
     roll_no1=roll_no;
}
~Student(){
    cout<<"the student is deleted\n";
    roll_no--;
}
void print(){
    cout<<"Roll No.: "<<roll_no1<<" Name: "<<Name<<" Subject: "<<subject<<"\n";
}
};
int Student::roll_no=0;

int main(){
  
Student k(5,"Chetan"),u;
u.print();
k.print();


return 0;
}