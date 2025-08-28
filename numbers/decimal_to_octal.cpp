#include<iostream>
using namespace std;

void convertOctal(int num)
{
    int octal = 0;
    int rem, i = 1;
    
    while(num!=0)
    {
        rem = num % 8;
        num /= 8;
        octal += rem * i;
        
  
        i *= 10;
    }
    cout << "Octal conversion of your number is " << octal;
}
 
int main()
{
    int num ;
    cout <<"Enter a decimal number : ";
    cin >> num;
    convertOctal(num);
    return 0;
}