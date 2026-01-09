#include<bits/stdc++.h>
using namespace std;

void armstrong_number(int n){
  int digit , temp , count=0, sum=0;
  temp=n;
  while (temp>0){
      count++;
      temp=temp/10;
  }
  temp=n;
  while(temp>0){
      digit=temp%10;
      sum+=(int)round(pow(digit,count));
      temp=temp/10;
  }
if(sum==n){
    cout<<"Armstrong number";
}
else{
    cout<<"not an Armstrong number";
}
}
int main(){
  int n;
  cin>>n;
  armstrong_number(n);
  return 0;
}
  
