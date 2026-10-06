#include<bits/stdc++.h>
using namespace std;
int Sum(vector<int> &nums,int k){
    int l=0;
    int r=k-1;
    int sum=0;
    int ans=0;

    for(int i=l;i<=r;i++){
        sum+=nums[i];
       
        
    }
    while(r<nums.size()){
        ans=max(ans,sum);
        if(r==nums.size()){
            break;
        }
        l++;
        r++;
        sum-=nums[l-1];
        sum+=nums[r];
        
        

    }
    return ans;
}
int main(){
    int k;cin>>k;
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int tuk=Sum(nums, k);
    cout<<tuk;

}