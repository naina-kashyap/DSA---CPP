#include<bits/stdc++.h>
using namespace std;

int majorele(vector<int> v){                                                            
    int cnt=0;
    int el;
    for(int i=0;i<v.size();i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==el) cnt1++;
    }
    if(cnt1>v.size()/2){
        return el;
    }
    return -1;
}
int main(){
    vector<int> v={1,2,1,4,1,1,1,1,3,5,4};
    cout<<majorele(v);
    return 0;
}
