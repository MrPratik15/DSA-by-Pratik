#include<bits/stdc++.h>
using namespace std;
int RangePallindrome(int n){
    int nums=n;
    int reverse=0;
    while(n>0){
        int temp=n%10;
        reverse=reverse*10+temp;
        n/=10;
    }
        return nums==reverse;
    
}
int main(){
    int start;
    cin>> start;
    int end; cin>>end; 
    int count=0;
    for(int i=start;i<=end;i++){
        if(RangePallindrome(i)){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<count;
}