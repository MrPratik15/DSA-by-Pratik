#include<bits/stdc++.h>
using namespace std;
vector<int> Leader(vector<int>& nums){
    vector<int> loki;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>=nums[i+1]){
            loki.push_back(nums[i]);
        }
    }
    loki.push_back(nums[nums.size()-1]);
    return loki;
}
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> thor=Leader(nums);
    for(int i=0;i<thor.size();i++){
        cout<<thor[i]<<" ";
    }
}