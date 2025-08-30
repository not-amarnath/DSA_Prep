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
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        largest = max(arr[i], largest);
    }

    cout << "\nLargest Element is : " << largest << endl;

    return 0;
}
