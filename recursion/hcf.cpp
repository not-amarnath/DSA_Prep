#include<iostream>
using namespace std;

int gethcf(int n1, int n2){
    if(n1==0) return n2;
    if(n2==0) return n1;
    if(n1==n2) return n1;

    if(n1 > n2)
        return gethcf(n1 - n2, n2);

    return gethcf(n2 - n1, n1);
}

int main(){
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    int hcf = gethcf(num1, num2);

    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
