#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){                                   
    int left=0 , right=n-1;
    sort(book.begin(), book.end());
    while(left<right){
        int sum= book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "no";
}
int main(){
    vector<int> book={2,6,5,8,11};
    cout<<read(5,book,14);
    return 0;
}
