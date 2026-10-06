#include<bits/stdc++.h>
using namespace std;
int divisible(vector<int> & nums,int k){
    unordered_map<int,int> mp;
    int count =0;
    for(int i=0;i<nums.size();i++){
        int rem=nums[i]%k;
        int need=(k-rem)%k;
        count=count+mp[need];
        mp[rem]++;
    }
    return count;
}
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int Div=divisible(nums,k);
        cout<<Div;
}
