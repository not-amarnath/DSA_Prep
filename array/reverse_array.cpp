#include<iostream>
using namespace std;
int main(){

int n; 
cout <<"Enter the size of array " ;
cin>>n;

int arr[n];

cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

   cout << "After reversing array" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[n - 1 - i] << endl;
    }
    return 0;
}