#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter your number: ";
    cin >> n;

    int d;
    cout << "Enter your digit: ";
    cin >> d;

    long long original = n; 
    int count = 0;

    while (n) {
        int rem = n % 10;
        if (rem == d) {
            count++;
        }
        n = n / 10;
    }

    cout << "The digit " << d << " presents in your number " 
         << original << " is " << count;

    return 0;
}
