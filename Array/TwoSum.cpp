#include<bits/stdc++.h>
using namespace std;
vector<int> TwoSum(vector<int> & nums ,int target){
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum<target){
            i++;
        }else if(sum>target){
            j--;

        }else{
            return{nums[i],nums[j]};
        }
    }
    return {};
}
int main(){
    int target; cin>>target;
    int n;cin>>n;
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector <int> p=TwoSum(nums,target);
    for(int i=0;i<p.size();i++){
        cout<<p[i];
    }
}
