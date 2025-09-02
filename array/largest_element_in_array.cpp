#include <bits/stdc++.h>
using namespace std;

int largest_element(int n, int arr[]) {
    if (n == 1) 
        return arr[0];  

    return max(arr[n - 1], largest_element(n - 1, arr));
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Largest Element is: " << largest_element(n, arr);
    return 0;
}
