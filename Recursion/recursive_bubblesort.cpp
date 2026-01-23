#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){                                  
    if(n==1)return;
    int didswap=0;
    for(int j=0;j<=n-2;j++){
        if(arr[j]>arr[j+1]){
            int temp= arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            didswap=1;
        }
    }
    if(didswap==0) return;
    bubblesort(arr, n-1);
}
int main(){
    int arr[]={13,46,24,52,20,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
