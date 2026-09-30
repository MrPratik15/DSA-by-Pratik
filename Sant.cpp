#include<bits/stdc++.h>
using namespace std;
int AllPrime(int n){
    for (int i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;

        }
    }
}
int main(){
    int n;
    cin>>n;
    int p=AllPrime(n);
}