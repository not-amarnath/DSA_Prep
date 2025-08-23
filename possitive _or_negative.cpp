#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<" Enter any number " << endl;
    cin>>n;

    if(n>=0 ){
        cout<< n <<" "<< "is a possitive number " << endl;
    }
    if(n<0){
        cout << n << " " <<" is negative number " << endl;
    }

    return 0;
}