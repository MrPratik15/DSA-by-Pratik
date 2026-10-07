#include<bits/stdc++.h>
using namespace std;
int TwoDiff(vector<int>& nums,int target){
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int need=nums[i]-target;
        if(mp.count(need)){
            count++;
         }
         mp[nums[i]]=i;

    }
    return count;
}
int main(){
    int target;cin>>target;
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int minus=TwoDiff(nums,target);
    cout<<minus;
}