#include<bits/stdc++.h>
using namespace std;
int Sum(vector<int>& nums,int target){
    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<nums.size();i++){
        int need=target -nums[i];
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
    int TwoSum=Sum(nums,target);
    cout<<TwoSum;
    
}