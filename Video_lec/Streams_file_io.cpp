#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    string name;
    int roll_no;
    float grade;
    static int toatlStudent;
    Student(string a,float c){
name=a;grade=c;roll_no=toatlStudent;
toatlStudent++;
    }
   friend ofstream & operator << (ofstream& ,Student&);
};
int Student::toatlStudent=1;

ofstream & operator << (ofstream &file,Student& s){
    file<<s.name<<"\t";
    file<<s.roll_no<<"\t";
    file<<s.grade<<endl;
    return file;
}

int main(){
    Student a("Tina",90.0);
//   ofstream my_file;
//   my_file.open("my.txt");
// //   cout<<"Hello"<<endl;
// //   my_file<<endl<<"HELLO, Chetan Sharma";
// for(int i=0;i<=10;i++){
//     my_file<<i*i<<endl;
// }
// my_file<<"The Square of number fomr 1 to 10 above";
//   my_file.close();
// ifstream my_file;
// my_file.open("my.txt");
// int a;
// while(!my_file.eof()){
// my_file>>a;
// cout<<a<<endl;}
// my_file.close();n
ofstream my_file;
my_file.open("my.txt",ios::app);
// my_file<<a.name<<"\t"<<a.roll_no<<"\t"<<a.grade<<endl;
my_file<<a;
my_file.close();
ifstream my1;
my1.open("my.txt")
return 0;
}