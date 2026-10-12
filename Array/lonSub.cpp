#include<bits/stdc++.h>
using namespace std;
int LongestSubArray(vector<int> & nums ,int k){
    unordered_map<int,int>mp;
     int sum=0;
     int maxLen=0;
     for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        if(sum==k){
            maxLen=i+1;
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            maxLen=max(maxLen,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
     }
     return maxLen;
}
int main(){
    int k;cin>>k;
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=LongestSubArray(nums,k);
    cout<<p<<" ";
}