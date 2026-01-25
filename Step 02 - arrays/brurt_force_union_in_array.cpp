#include<bits/stdc++.h>
using namespace std;

vector <int> sortedarray (vector<int>a, vector<int> b){     
    int n1=a.size();
    int n2=b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int>  temp;
    for(auto it: st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    vector<int> a={1,2,4,2,1,5};
    vector<int> b={1,8,9,2,1,5};
    vector<int> ans=sortedarray(a,b);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
