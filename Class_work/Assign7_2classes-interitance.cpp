#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
    public:
    int roll_no,rank;
    Student(int a,int b){
        roll_no=a;rank=b;
    }

};

class HighSchool_student:public Student{
public:
int subject,age;
HighSchool_student(int a,int b,int p,int q):Student(p,q){
    subject=a;age=b;
}
void print(void){
    cout<<"No. Of Subject: "<<subject<<" Age: "<<age<<" Roll No.: "<<roll_no<<" Rank: "<<rank<<endl;
}
};

int main(){
  //Write two classes implementing inheritance on 2 show use of parameterized constructor of base class,while making derived class object
HighSchool_student s(5,24,224578,27);
s.print();
return 0;
}