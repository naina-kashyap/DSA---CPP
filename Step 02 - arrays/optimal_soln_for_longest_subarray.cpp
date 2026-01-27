#include<bits/stdc++.h>
using namespace std;

int longestsubbarray(vector<int> a, long long k){                                       
    int left=0;
    int right=0;
    int maxlen=0;
    long long sum=a[0];
    int n=a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=a[right];
    }
    return maxlen;
}
int main(){
    vector<int> a={1,2,3,1,1,1,1,4,2,3};
    long long k;
    cin>>k;
    cout<<longestsubbarray(a,k);
    return 0;
}
