#include<iostream>
using namespace std;
int main(){

int num1, num2, lcm;
int hcf =1;
cout<<"Enter first number " << endl;
cin>>num1;
cout<<"Enter second number " << endl;
cin>>num2;

for(int i =1; i<=num1 && i<=num2; i++){
    if(num1%i==0 && num2%i==0){
        hcf =i;
    }
}

lcm = (num1*num2)/hcf;

cout<<"Least Common Multiple of " <<"" << num1 << " and " << num2 << " is " << " " << lcm;


    return 0;
}