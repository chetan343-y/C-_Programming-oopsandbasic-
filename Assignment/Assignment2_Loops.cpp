#include<bits/stdc++.h>
using namespace std;

int find_gcd(int ,int);
int main(){

    //  Write a program in C++ to find the first 10 natural numbers. 
    for(int i=1;i<11;i++)
        cout<<i<<" ";
    // }     
    cout<<"\n"; 
        
        // Write a program in C++ to find the perfect numbers between 1 and 500.                                                                          The perfect numbers between 1 to 500 are        
        for(int i=1;i<=500;i++){
            int sum=0;
            for(int j=1;j<i;j++){
 int div=i%j;
 if(div==0)
 sum+=j; }
            if(sum==i)
            cout<<i<<" ";
        } 

        //gcd of two numbers
        int a,b;
     cin>>a>>b;
     cout<<"GCD: "<<find_gcd(a,b);                             
 return 0;
}

int find_gcd(int a,int b){
        if(b==0)
        return a;
    else return find_gcd(b,a%b);      
}