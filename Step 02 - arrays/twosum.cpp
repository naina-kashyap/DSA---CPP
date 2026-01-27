#include<bits/stdc++.h>
using namespace std;

pair<int,int> twosum(vector<int> &book, int target){                              
    int n=book.size();
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a=book[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            return{mpp[more], i};
        }
        mpp[a]=i;
    } 
    return {-1,-1};
}
int main(){
    vector<int> book={2,6,5,8,11};
    pair<int,int> ans= twosum(book,14);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}
