#include<iostream>
using namespace std;
int main(){

float radius;
float pi = 3.14;

cout<<"Enter the radius of your circle :";
cin>>radius;

float ans = (pi*(radius*radius));
cout<< " The area of your circle is : " <<"" << ans;
    return 0;
}