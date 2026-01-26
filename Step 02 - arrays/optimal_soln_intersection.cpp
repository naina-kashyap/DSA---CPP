#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &A , vector<int> &B, int n , int m){           
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if (B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> a={1,2,5,8};
    vector<int>b={1,2,3,4,5};
    vector<int> res= intersection(a,b,a.size(), b.size());
    for(auto it: res){
        cout<<it<<" ";
    }
    return 0;
}
