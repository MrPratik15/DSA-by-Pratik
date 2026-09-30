#include<bits/stdc++.h>
using namespace std;
int countt(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int  main(){
    int n;
    cin>>n;
  int co=countt(n);
   cout<<co;
}