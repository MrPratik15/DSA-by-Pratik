#include <bits/stdc++.h>
using namespace std;
int Divisible(int n){
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum+=digit;
        n/=10;
    }
    if (sum%3==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int p=Divisible(n);
    cout<<p;
}