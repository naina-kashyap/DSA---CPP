#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){         
    int largest=arr[0];
    int slargest= -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int secondsmallest(int arr[],int n){
    int smallest= arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            ssmallest=smallest;
        }
        else if (arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int arr[]={1,2,2,5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int slargest=secondlargest(arr,n);
    int ssmallest=secondsmallest(arr,n);
    cout<<slargest<<" ";
    cout<<ssmallest;
    return 0;
}
