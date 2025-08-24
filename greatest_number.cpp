#include<iostream>
using namespace std;
int main(){

int m, n;

cout<<"Enter First number " << endl;
cin>>m;
cout<<"Enter second number "<<endl;
cin>>n;

if(m>n){
    cout<< m << " " << "is greater than" << " " << n <<endl;
}
else{
     cout<< n << " " << "is greater than" << " " << m <<endl;
}
}