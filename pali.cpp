#include<bits/stdc++.h>
using namespace std;
int Pallindrome(int n){
    int nums= n;
    int reversed =0;
    while(n>0){
        int temp=n%10;
        reversed=reversed*10+ temp;
        n /=10;
    }
    if (nums== reversed){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int drom=Pallindrome(n);
    cout<<drom;
}