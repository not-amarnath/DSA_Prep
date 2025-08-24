#include<iostream>
using namespace std;
int main(){

int m , n;
cout<<"Enter upper bound " << endl;
cin>>m;
cout<<"Enter lower bound " << endl;
cin>>n;

int sum = 0;

for(int i =m; i<=n; i++)
{
    sum = sum +i;
}

cout<< " sum of numbers between " << " " << m << " "<<"and " << " " <<n << " is " << " "<< sum;
}