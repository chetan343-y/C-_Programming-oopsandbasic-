#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool compare(int a, int b) {
    return a > b; // Sort in descending order
}

int main(){
      int arr[] = {64, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    sort(arr, arr + n);

    cout << "\nSorted array(ascending): \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
sort(arr, arr + n, compare);

    cout << "\nSorted array(descending): \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";


return 0;
}