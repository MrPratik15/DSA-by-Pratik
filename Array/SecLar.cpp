#include<bits/stdc++.h>
using namespace std;
int SL(vector<int> & nums){
    int large=INT_MIN;
    int secound=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if (nums[i]>large){
            secound= large;
            large=nums[i];
        }else if(nums[i]>secound && nums[i]!=large){
            secound=nums[i];
        }
    }
    return secound;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=SL(nums);
    cout<<p;

}