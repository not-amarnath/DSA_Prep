#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter any number " << endl;
    cin>>num;

    while(num>0){
        int digit = num % 10; 
        sum += digit;       
        num /= 10;         
    }

    cout<<"Sum of digits is: " << sum << endl;

    return 0;
}