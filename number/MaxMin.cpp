#include<bits/stdc++.h>
using namespace std; 
int findMAxMin(int n){
    int maxi=0;
    int mini=9;
    while(n!=0){
        int digit = n%10;
        maxi=max(maxi,digit);
        mini=min(mini,digit);
        n=n/10;
    }
    cout<<"Maximum= "<<maxi<<" ";
    cout<<"Minimum= "<<mini<<" ";
}
int main(){
    int n;
    cin>>n;
    findMAxMin(n);

}