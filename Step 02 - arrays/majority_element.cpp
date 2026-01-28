#include<bits/stdc++.h>
using namespace std;

int majorityelement(vector<int> v){                                                     
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second > (v.size()/2)){
            return it.first;
        }
    }
    return -1;
}
int main(){
    vector<int> v={2,2,3,3,1,2,2};
    cout<<majorityelement(v);
    return 0;
}
