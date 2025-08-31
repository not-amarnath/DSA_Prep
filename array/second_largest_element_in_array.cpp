#include <iostream>
#include <climits>
using namespace std;

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least 2 elements!" << endl;
        return;
    }

    int largest = arr[0];
    int seclargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > seclargest) {
            seclargest = arr[i];
        }
    }

    if (seclargest == INT_MIN) {
        cout << "No second largest element (all elements might be equal)." << endl;
    } else {
        cout << "Largest = " << largest << endl;
        cout << "Second Largest = " << seclargest << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
         cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    findSecondLargest(arr, n);

    return 0;
}
