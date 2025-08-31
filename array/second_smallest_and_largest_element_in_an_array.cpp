#include <iostream>
#include <climits>
using namespace std;

void findExtremes(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least 2 elements!" << endl;
        return;
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    if (secondSmallest == INT_MAX)
        cout << "No second smallest element (all elements might be equal)." << endl;
    else
        cout << "Second Smallest = " << secondSmallest << endl;

    cout << "Largest = " << largest << endl;
    if (secondLargest == INT_MIN)
        cout << "No second largest element (all elements might be equal)." << endl;
    else
        cout << "Second Largest = " << secondLargest << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    findExtremes(arr, n);

    return 0;
}
