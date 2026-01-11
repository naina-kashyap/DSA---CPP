#include<bits/stdc++.h>
using namespace std;

bool pallindrome_string(int i, string &s){
  if(i>=(s.size()/2)) return true;
  if(s[i]!= s[s.size()-i-1]) return false;
return pallindrome_string( i+1 ,s);
}

int main(){
  string s;
  cin>>s;
  cout<<pallindrome_string(0,s);
  return 0;
}
