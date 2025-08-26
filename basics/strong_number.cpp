#include<iostream>
using namespace std;


int fact(int n){
    int num = 1;
    for(int i = 1; i<=n; i++)
    {
        num = num *i;

    }
    return num;
}

int main(){

int sum = 0;
int n,ans;
cout<<"Enter any number " << endl;
cin>>n;

int temp = n; 

    while(temp > 0) {
        int digit = temp % 10;   
        sum += fact(digit);      
        temp /= 10;  
    }

     if(sum == n)
        cout << n << " is a Strong Number" << endl;
    else
        cout << n << " is NOT a Strong Number" << endl;


    return 0;
}