#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Employee{

    string name;
    string phone_no;
    string job_post;
    int age;
public:
    friend ostream & operator << (ostream &out,Employee &c);
     friend istream & operator >> (istream &in,Employee &c);
     void operator = (Employee&);
};
//input
 istream & operator >> (istream &in,Employee &c){
    cout<<"Enter name of employee: "<<endl;
    in>>c.name;
    cout<<"Enter age of employee: "<<endl;
    in>>c.age;
    cout<<"Enter phone no. of employee: "<<endl;
    in>>c.phone_no;
    cout<<"Enter Job Post of employee: "<<endl;
    in>>c.job_post;
    return in;
 }
//ouput
  ostream & operator << (ostream &out,Employee &c){
    out<<"\n_____Employee Details____\n";
    out<<" name of employee: "<<c.name<<endl;
    out<<" age of employee: "<<c.age<<endl;
    out<<" phone no. of employee: "<<c.phone_no<<endl;
    out<<"Job Post of employee: "<<c.job_post<<endl;
    return out;
 }
// std::ostream& operator<<(std::ostream& out, const Employee& c) {
//     out << "Name of employee: " << c.getName() << std::endl;
//     out << "Age of employee: " << c.getAge() << std::endl;
//     out << "Phone no. of employee: " << c.getPhoneNo() << std::endl;
//     out << "Job Post of employee: " << c.getJobPost() << std::endl;
//     return out;
// }

//copying
void Employee::operator = (Employee& b){
    name=b.name;
    age=b.age;
    phone_no=b.phone_no;
    job_post=b.job_post;
}
int main(){
  //overload the  operator >>,<<,= 

Employee a,b;
cin>>a;
cout<<a;
b=a;
cout<<b;

return 0;
}