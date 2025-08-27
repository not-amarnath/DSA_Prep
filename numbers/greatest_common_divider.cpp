#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    if(num1==0){
        return num1;
    }
    if(num2==0){
        return num2;
    }

    if(num1==num2){
        return num1;

    }

    if(num1>num2){
        return gcd(num1-num2, num2);
    }
    if(num2>num1){
        return gcd(num2-num1, num1);
    }
}



int main(){

int num1, num2;
cout<<"Enter first number "<<endl;
cin>>num1;
cout<<"Enter second number "<<endl;
cin>>num2;

int ans = gcd(num1,num2);
cout<<"Gcd of " << "" << num1 <<" and " <<"" <<num2 << " is " << ans;
    return 0;
}