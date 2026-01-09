int reverse_num(int n){                         //REVERSE NUMBER
    int rev=0,digit,temp;
    temp=n;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;

    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse_num(n);
    return 0;
}
