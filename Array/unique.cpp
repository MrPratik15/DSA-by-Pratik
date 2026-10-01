#include<bits/stdc++.h>
using namespace std;
int pratik(vector<int>& nums){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++; 
    }
    for (int i=0;i<nums.size();i++){
        if(mp[nums[i]==1]){
            return nums[i];
            break;
        }


    }
    return 0;
}
int main(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=pratik(nums);
    cout<<p;
}