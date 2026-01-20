#include<bits/stdc++.h>
using namespace std;

void f(int arr[],int l,int r){                          
    if(l>=r) return ;
    swap(arr[l],arr[r]);
    f(arr,l+1,r-1);
}
int main(){
    int arr[5]={1,25,4,8,6};
    f(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
