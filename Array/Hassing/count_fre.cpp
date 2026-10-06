#include<bits/stdc++.h>
using namespace std;
vector<int> fre(vector<int> &nums){
    unordered_map<int ,int>mp;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;   
    }
    for(int i=0;i<nums.size();i++){
        ans.push_back(mp[nums[i]]);
    }
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>p=fre(nums);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}