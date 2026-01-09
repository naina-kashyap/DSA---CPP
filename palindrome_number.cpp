bool pallindrome(int n){                    //PALLINDROME NUMBER
    int rev=0,digit,temp;
    temp=n;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(rev==n){
        cout<<true;
    }
    else{
        cout<<false;
    }
}
int main(){
    int n;
    cin>>n;
    pallindrome(n);
    return 0;
}
