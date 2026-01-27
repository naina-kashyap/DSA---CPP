#include<bits/stdc++.h>
using namespace std;

int appearonce(vector<int> &a , int n){                                         
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^a[i];
    }
    return xorr;
}
int main(){
    vector<int> a={1,1,2,1,1,1,1};
    cout<<appearonce(a,7);
    return 0;
}
