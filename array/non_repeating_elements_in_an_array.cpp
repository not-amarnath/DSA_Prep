#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cout<<"Enter arr[" <<i <<"] = ";
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Non-repeating elements are: ";
    for (auto it : freq) {
        if (it.second == 1) {
            cout << it.first << " ";
        }
    }
    return 0;
}
