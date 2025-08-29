#include<iostream>
using namespace std;

int main(){
    long long num ;
    cout<<"Enter any number : ";
    cin>>num;
   long long original = num; 
    int digit = 0;
    
    while(num > 0){
        digit++;
        num = num / 10;
    }
    
    cout << "No. of digits of your number " << original << " = " << digit;
    return 0;
}
