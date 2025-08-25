#include<iostream>
using namespace std;

int factorial(int a)
{
    int fact =1;
    for(int i=1; i<=a; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main(){

int n;
cout<<" Enter Your number " << endl;
cin>>n;
int answer = factorial(n);

cout << " The factorial of the number " << "" << n << ""<< " is " << answer;

    return 0;
}