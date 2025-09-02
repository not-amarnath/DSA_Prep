#include <iostream>
#include <vector>
using namespace std;

void selectionSort1(vector<int>& arr, int n) {   // For ascending order 
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) 
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}


void selectionSort2(vector<int>& arr, int n) {   // for desceding order
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[minIndex]) 
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nOriginal Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort1(arr, n);
      
    cout << "\nSorted Array in Ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort2(arr, n);
      
    cout << "\nSorted Array in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
