#include<bits/stdc++.h>
using namespace std;

void prime_number(int n){
  int count = 0;
  for(int i = 1;i<=n ; i++ ){
      if(n%i == 0) {
          count++;
      }
  }
if( count == 2){
    cout<< "Prime number" ;
}
else{
    cout<<" Not a prime number " ;
}
}

int main(){
  int n;
  cin>> n;
  prime_number(n);
  return 0;
}
