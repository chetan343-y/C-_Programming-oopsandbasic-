#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//int radius of circle area
float area_of_circle(int r){
    float area=3.14*r*r;
    return area;
}

// Greatest of three numbers 
int Greatest(int a,int b,int c){
    if(a>b && a>c)
    return a;
   else if(b>a && b>c)
    return b;
   else 
    return c;
}

//x^y
int XoverY(int x,int y){
    int ans=1;
    for(int i=1;i<=y;i++){
       ans*=x; 
    }
    return x;
}


int main(){
  int radius;
  cout<<"Enter the radius of the circle: ";
  cin>>radius;
  cout<<"Area of Circle ="<<area_of_circle(radius)<<endl;

  int a,b,c;
  cout<<"Enter three numbers : ";
  cin>>a>>b>>c;
  cout<<"Greatest of three number= "<<Greatest(a,b,c)<<endl;

int x,y;
cout<<"Enter two number : ";
cin>>x>>y;
cout<<"The answer of X ^ Y= "<<XoverY(x,y)<<endl;

int e,r;
cout<<"Enter the value of e and r respectively as : ";
cin>>e>>r;
swap(e,r);
cout<<"Value of e and r after swapping : "<<e<<" $ "<<r;


return 0;
}