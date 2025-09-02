#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() 
{ 
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    cout << "\nFrequencies:\n";
    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " occurs " << it->second << " times\n";

    return 0;
}
