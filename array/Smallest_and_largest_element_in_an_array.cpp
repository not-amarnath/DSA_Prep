#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "\nSmallest Element: " << smallest << endl;
    cout << "\nLargest Element: " << largest << endl;

    return 0;
}
