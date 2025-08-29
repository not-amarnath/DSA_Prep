#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
   for(int i=2; i<=sqrt(n); i++){
       if(n%i==0)
         return false;
   }

   return true;
}

int main()
{
   int n ;
   cout <<"Enter your number ";
   cin>>n;
   if (isPrime(n))
      cout << n <<"" << " is a Prime Number";
   else
       cout << n <<"" << " is Not a Prime Number";
   return 0;
}