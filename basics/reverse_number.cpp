#include<iostream>
using namespace std;
int main(){
    int num;
    int rev=0;
    cout<<"Enter any number " << endl;
    cin>>num;

    while(num>0){
        int digit = num % 10; 
        rev = rev * 10 + digit;       
        num /= 10;         
    }

    cout<<"Reverse of the number is: " << rev << endl;

    return 0;
}