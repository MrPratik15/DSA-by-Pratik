#include<bits/stdc++.h>
using namespace std;
int SecSmall(vector<int> & nums){
    int Small=INT_MAX;
    int Secound=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if (nums[i]<Small){
            Secound=Small;
            Small=nums[i];
        }else if(nums[i]<Small && nums[i]!=Small){
            Secound=nums[i];
        }

    }
    return Secound;
}
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
    cin>>nums[i];
    }
    int p= SecSmall(nums);
    cout<<p<<" ";
}