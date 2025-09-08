#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: " <<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter arr[" << i << "] :";
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Repeating elements are: ";
    bool found = false;
    for (auto it : freq) {
        if (it.second > 1) {   
            cout << it.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No repeating elements";
    }

    cout << endl;
    return 0;
}
