#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout<<"Enter arr[" << i<<"] = ";
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    vector<pair<int, int>> vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        if (a.second == b.second)
            return a.first < b.first; 
        return a.second > b.second;   
    });

    cout << "\nSorted by frequency (Descending): ";
    for (auto &p : vec) {
        cout << p.first << " ";
    }

    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        if (a.second == b.second)
            return a.first < b.first; 
        return a.second < b.second;   
    });

    cout << "\nSorted by frequency (Ascending): ";
    for (auto &p : vec) {
        cout << p.first << " ";
    }

    cout << endl;
    return 0;
}
