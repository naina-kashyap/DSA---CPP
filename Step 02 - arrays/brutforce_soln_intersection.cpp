#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &a,vector<int> &b, int m,int n){             
    vector<int> ans;
    vector<int> vis(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    }
    return ans;
}
int main(){
    vector<int> a={1,2,5,8};
    vector<int>b={1,2,3,4,5};
    vector<int> res= intersection(a,b,b.size(), a.size());
    for(auto it: res){
        cout<<it<<" ";
    }
    return 0;
}
