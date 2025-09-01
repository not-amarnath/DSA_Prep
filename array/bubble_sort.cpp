#include <iostream>
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

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "\nAfter Sorting: " <<endl;
    for (int i = 0; i < n; i++) {
       cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
