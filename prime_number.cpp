#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"Enter any number " << endl;
    cin>>num;
    if(num<=1){
        cout<< num << " " << " is not a Prime number " <<endl;
}
    else {
        for(int i = 1; i<=num; i++){
               if(num%i==0){
                count++;
               }
        }
    }

if(count>2){
   cout<< num << " " << "is not a Prime number " <<endl;

}

else {
    cout<< num << " " << "is a Prime number "<<endl;
}
return 0;
}
