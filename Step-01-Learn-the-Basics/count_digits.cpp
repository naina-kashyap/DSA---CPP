// METHOD - 1

#include<bits/stdc++.h>                                          
using namespace std;

int count_digits(int n){                     
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int res=count_digits(n);
    cout<<res;
    return 0;
}

// METHOD - 2

#include<bits/stdc++.h>                                          
using namespace std;

int count_digits(int n){                       
    int cnt=(int)(log10(n)+1);
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<count_digits(n);
    return 0;
}
