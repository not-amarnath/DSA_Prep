#include <iostream>
#include <climits>
using namespace std;

void findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least 2 elements!" << endl;
        return;
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        cout << "No second smallest element (all elements might be equal)." << endl;
    } else {
        cout << "Smallest = " << smallest << endl;
        cout << "Second Smallest = " << secondSmallest << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    findSecondSmallest(arr, n);

    return 0;
}
