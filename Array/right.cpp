#include<bits/stdc++.h>
using namespace std;
vector<int> kPoss(vector<int> & nums, int k){
    int n= nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.begin()+k);

    return nums;
    
} int main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> p=kPoss(nums,k);
    for(int i=0;i<p.size();i++){
        cout<<nums[i];
    }



}