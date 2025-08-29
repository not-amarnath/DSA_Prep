#include <iostream>
using namespace std;

int replaceZeroWithOne(int num) {
  
    if (num == 0) return 1;

    int result = 0, place = 1;

    while (num > 0) {
        int digit = num % 10;
        
        if (digit == 0) {
            digit = 1; 
        }

        result = (digit * place) + result;
        place *= 10;
        num /= 10;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "After replacing 0 with 1: " << replaceZeroWithOne(n) << endl;

    return 0;
}
