#include<bits/stdc++.h>
using namespace std;

int freq(int arr[],int num){
  int count=0;
  for(int i=0;i<5;i++){
    if(arr[i] == num){
      count++;
    }
  }
return count;
}

int main(){
  int num;
  cin>>num;
  int arr[5]={1,2,1,1,5};
  cout<<freq(arr,num);
  return 0;
}
