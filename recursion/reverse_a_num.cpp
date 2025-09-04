#include <bits/stdc++.h>
using namespace std;

void reverse(int n)
{
   if (n < 10) {
      cout << n;   
      return;
   }
   cout << n % 10;
   reverse(n / 10);
}

int main()
{
   int n;
   cout << "Enter any number: ";
   cin >> n;
   cout << "After Reversing ";
   reverse(n);
   cout << endl;
   return 0;
}
