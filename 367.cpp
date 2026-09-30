#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int nums){
    int i=0;
    int j=nums;
    while(i<=j){
     int mid= i+(j-i)/2;
     if (1ll*mid*mid==nums){
        return true;
     }
     else if(1ll*mid*mid<nums){
        i=mid+1;
     }else{
        j=mid-1;
     }
    }
return false;
}
int main(){
    int nums;
    cin>>nums;

    if(isPerfect(nums)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
