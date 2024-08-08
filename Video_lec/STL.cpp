#include<bits/stdc++.h>
using namespace std;

struct DecreasingOrder {
    bool operator()(int a, int b) {
        return a > b;
    }
};
int main(){
  vector <int> a{4,3,5,6,7,8,9,24,75};
for(auto i:a)
cout<<i<<" ";
cout<<endl;
cout<<a.size();
int f=10;
a.push_back(f);
cout<<endl;

for(auto i:a)
cout<<i<<" ";
a.pop_back();
cout<<endl;
sort(a.begin(),a.end(),DecreasingOrder());
for(auto i:a)
cout<<i<<" ";

return 0;
}