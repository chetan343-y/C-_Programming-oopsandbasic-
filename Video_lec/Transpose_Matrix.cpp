#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"The order of the matrix : ";
   cin>>n;
   int mat1[n][n];
   for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
    cin>>mat1[i][j];
 
//  transpose of matrix
int transposemat[n][n];
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
    transposemat[i][j]=mat1[j][i];
cout<<endl;
for(int i=0;i<n;i++)
  { for(int j=0;j<n;j++)
   { cout<<transposemat[i][j]<<" ";}
  cout<<endl;
  }

return 0;
    
}