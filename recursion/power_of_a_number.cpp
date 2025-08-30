#include<iostream>
using namespace std;
int power (int a, int b)
{
    int ans =1;
    for(int i=1; i<=b; i++)
    {
        ans = ans*a;
    }
    return ans;
}
int power2 (int a, int b)
{
    int ans =1;
    for(int i=1; i<=a; i++)
    {
        ans = ans*b;
    }
    return ans;
}
int main()
{
    int a,b;
    cout<< "Enter the value of a : ";
    cin>>a;
    cout<< "Enter the value of b : ";
    cin>>b;
    int answer = power(a,b);
    int answer2 = power2(a,b);

cout<< " power of " << a  << " to the power " << b  <<" is " << answer << endl;
cout<< " power of " << b  << " to the power " << a <<" is " << answer2 << endl;
    return 0;
}
