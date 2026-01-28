#include<bits/stdc++.h>
using namespace std;

void sortarray(vector<int> a,int n){                                                    
    int low=0, mid=0 , high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(auto it: a){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    vector<int> a={1,0,2,0,1,0,2,1,1,0,0};
    sortarray(a,11);
    
    return 0;
}
