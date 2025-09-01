#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "\nAfter Ascending:" << endl;
    for (int i = 0; i < n; i++) {
         cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    sort(arr, arr + n, greater<int>());

    cout << "\nAfter Descending:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
