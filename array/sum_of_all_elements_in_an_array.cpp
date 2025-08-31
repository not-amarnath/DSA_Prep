#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"Enter the size of Array : ";
cin>>n;

int arr[n];
int sum =0;

cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
  
     for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
     }
  
      cout << " Sum of all elements in an array is " << sum ;
}