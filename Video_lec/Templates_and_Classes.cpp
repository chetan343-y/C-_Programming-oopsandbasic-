#include<bits/stdc++.h>
using namespace std;

template <class T>

T greatestNum(T a,T b){
    if(a>b)
    return a;
return b;
}

template <class Y,class X>
Y add(Y a,X b){
    return a+b;
}

template <class T1>
class Matrix{
    public:
    T1 arr[100][100];
};

int main(){
Matrix <float> u;
int a=0,b=1;
float c=1.2,d=3.1;
cout<<"Greatest is "<<greatestNum<int>(a,b)<<endl;
cout<<"Greatest is "<<greatestNum<float>(c,d)<<endl;
cout<<"Addition is "<<add<int,float>(a,c)<<endl;

    return 0;
}