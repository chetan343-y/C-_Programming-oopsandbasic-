#include<bits/stdc++.h>
using namespace std;

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "The roots are real and equal: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex: " << realPart << " + " << imagPart << "i and " << realPart << " - " << imagPart << "i" << endl;
    }
}
int main(){
    double a,b,c;
    cout<<"Enter the value of a,b,c: ";
    cin>>a>>b>>c;
    try{
        if(a==0)
        throw 1;
    findRoots(a, b, c);
    }
    catch(...){
        cout<<"An exception in finding the quadrartic equation has occur(a cann't be zero)"<<endl;
    }
  
}