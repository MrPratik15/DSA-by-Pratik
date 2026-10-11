#include<bits/stdc++.h>
using namespace std;
int Fibbonic(int n, int a, int b){
   
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
         int c=a+b;
    a=b;
    b=c;
    }
    return 0;
}
int main(){
    int n;cin>>n;
    int a;cin>>a;
    int b;cin>>b;
    Fibbonic(n,a,b);
}