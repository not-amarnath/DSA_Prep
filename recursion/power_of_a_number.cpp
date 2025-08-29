 #include<bits/stdc++.h>
  using namespace std;

 int power(int base, int x){

  int result=1;
  while(x--){
  result *= base;
 }

 return result;
}

  int main(){
  int base , x ;
  cout <<" Enter Base number  : " ;
  cin>>base;
  cout <<"Enter the power :  ";
  cin>>x;
  cout<<" After calculating the power of  "<< base << " " << "to the power " <<"" <<x <<"" <<" is "<<power(base, x);
}