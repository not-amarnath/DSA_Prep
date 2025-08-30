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
    

    for (int i = 0; i < n; i++) {
        smallest = min(arr[i], smallest);
        
    }

    cout << "\nSmallest Element is : " << smallest << endl;
   
    return 0;
}
