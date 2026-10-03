#include<bits/stdc++.h>
using namespace std;
vector<int> moni(vector<int> & nums){
    vector<int> baby;
    int n=nums.size();
    int maxi=nums[n-1];
    baby.push_back(maxi);

    for(int i=n-2;i>=0;i--){
        if(nums[i]>maxi){
            baby.push_back(nums[i]);
            maxi=nums[i];
        }

    }
    reverse(baby.begin(),baby.end());
    return baby;
}
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>sona=moni(nums);
    for(int i=0;i<sona.size();i++){
        cout<<sona[i]<<" ";
    }
}