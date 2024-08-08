#include<iostream>
#include<cmath>
using namespace std;

int main(){
//Write a program to check if Three are collinear or not on x-y plane(is traingle or not if area !0 collinear else non-collinear)
// int x1,x2,x3,y1,y2,y3;
// float a,b,c,s,area;
// //x1,y1=1
// //x2,y2=2
// //x3,y3=3
// //1-2=a
// //2-3=b
// //3-1=c
// cout<<"Enter values of first point (x and y respectively):"<<endl;
// cin>>x1>>y1;
// cout<<"Enter values of second point (x and y respectively):"<<endl;
// cin>>x2>>y2;
// cout<<"Enter values of Third point ( x and y respectively):"<<endl;
// cin>>x3>>y3;

// //sqrt
// a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
// b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
// c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
// s=(a+b+c)/2;

// cout<<"A: "<<a<<endl<<"B: "<<b<<endl<<"C: "<<c<<endl<<"S: "<<s<<endl;

// area=sqrt(s*(s-a)*(s-b)*(s-c));

// cout<<"Area: "<<area<<endl;

// if(!area)
// cout<<"Points are collinear"<<endl;
// else
// cout<<"Points are not collinear"<<endl;

//Square roots of quadratic equations
 double x, y, z, discriminant, root1, root2, realPart, imagPart;

    cout << "Enter coefficients a, b, and c: ";
    cin >> x>> y >> z;

    discriminant = y * y- 4 * x * z;

    if (discriminant > 0) {
        // Real and different roots
        root1 = (-y + sqrt(discriminant)) / (2 * x);
        root2 = (-y - sqrt(discriminant)) / (2 * x);
        cout << "Roots are real and different:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = -y / (2 * x);
        cout << "Roots are real and equal:\n";
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        // Complex roots
        realPart = -y / (2 * x);
        imagPart = sqrt(-discriminant) / (2 * x);
        cout << "Roots are complex:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}