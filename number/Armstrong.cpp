#include <bits/stdc++.h>
using namespace std;
int Armstrong(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit*digit*digit;

    }
    if (sum==n){
        return true;
    }
    else{
        return false;
    }
    

}
int main(){
    int n;
    cin>>n;
    int A=Armstrong(n);
    cout<<A;
}