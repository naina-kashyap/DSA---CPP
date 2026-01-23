#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n , int i){                          
    if(i==n)return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertionsort(arr,n,i+1);
}
int main(){
    int arr[]={13,46,24,52,20,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionsort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
