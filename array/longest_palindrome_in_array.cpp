#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;     
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter number of elements in array: ";
    cin >> num;
   vector<int> arr(num);   
for(int i=0; i<num; i++){
    cout << "Enter arr[" << i << "]: ";
    cin >> arr[i];    
}

    int longestPalindrome = -1; 
    int maxLength = 0;          

    for (int num : arr) {
        if (isPalindrome(num)) {
            int len = countDigits(num);

            if (len > maxLength) {
                maxLength = len;
                longestPalindrome = num;
            }
        }
    }

    if (longestPalindrome != -1)
        cout << "Longest Palindrome: " << longestPalindrome << endl;
    else
        cout << "No palindrome found!" << endl;

    return 0;
}
