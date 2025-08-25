#include<iostream>
using namespace std;

int getreverse(int reverse, int num){
     if(num == 0)
        return reverse;
    int count = 0;
    count = num%10;
    reverse = reverse * 10 + count;
   return getreverse(reverse, num / 10);
}

int main(){
int num;
cout<<"Enter any number " << endl;
cin>>num;

int reverse =0;

if(getreverse(reverse, num) == num) {

     cout << num << " is palindrome" << endl;
}  
       
    else
        cout << num << " is not palindrome" << endl;

        return 0;

}









