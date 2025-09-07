#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        
        cout<<"Enter arr[" <<i <<"] :";
        cin >> arr[i];
    }

    set<int> s; 
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);  
    }

    cout << "Number of distinct elements: " << s.size() << endl;

    return 0;
}
