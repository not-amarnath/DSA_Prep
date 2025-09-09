#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n;
    cout << "Enter how many elements you want: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;   
        s.insert(x); 
    }

    cout << "Elements are: ";
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
