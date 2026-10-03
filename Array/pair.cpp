#include<bits/stdc++.h>
using namespace std;
int pairs(vector<int> & nums,int k){
    int i=0;
    int j=nums.size()-1;
    int count=0;
    while(i<j){
        int sum=nums[i]+nums[j];
        if (sum%k==0){
            count++;
            i++;
            j--;
        }else if (sum>k){
            j--;
        }else{
            i++;
        }
    }
    return count;
}
int main(){
    int k;
    cin>>k;
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=pairs(nums,k);
    cout<<ans;
}