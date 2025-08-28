#include<iostream>
#include<math.h>
using namespace std;

int getOctal(long long num)
{
    int i = 0, decimal = 0;
    int base = 8;

    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}
int main(){

   long long n;
   cout << " Enter any number :  ";
   cin>>n;
long long ans = getOctal(n);
   cout << " Your number is " << n << endl;;
cout << " After converting it's turned into  " << "" << ans;
  
    return 0;
}