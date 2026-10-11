#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums){
    int curSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<nums.size();i++){
        curSum=curSum+nums[i];
        maxSum=max(curSum,maxSum);
        if(curSum<0){
            curSum=0;
        }
    }
    return maxSum;
}
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=maxSubArray(nums);
    cout<<p;
}