#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(a != 0 && b != 0){
        if(a > b)
            a = a % b;
        else
            b = b % a;
    }
    return (a == 0) ? b : a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
