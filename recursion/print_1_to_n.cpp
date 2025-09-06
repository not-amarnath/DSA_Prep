#include<iostream>
using namespace std;

void printascending(int n){
    if(n==0)
    {
        return;
    }
    printascending(n-1);
    cout<< " " << n;

}
void printdescending(int n){
    if(n==0)
    {
        return;
    }
   cout<< " " << n;
    printdescending(n-1);


}


int main ()
{
    int n;
    cout<<"Enter the range : ";
    cin>>n;
cout<<"Printing your number by ascending order  : ";
    printascending(n);
    cout<<endl;
cout<<"Printing your number by descending order  : ";
    printdescending(n);
    cout<<endl;


}