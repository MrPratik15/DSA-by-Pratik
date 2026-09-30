#include <bits/stdc++.h>
using namespace std;
int search (vector<int>& nums,int target){
  int  i=0;
  int j=nums.size()-1;
  while(i<=j){
    int mid =i+(j-i)/2;
    if (nums[mid]==target){
        return mid;
    }
    if (nums[i]<=nums[mid]){
        if (nums[i]<=target &&nums[mid]>target){
            j= mid-1;

        }else{
            i=mid+1;
        }

    }else{
        if(nums[j]<=target && nums[mid]>target){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    
  }
return-1;

}
int main(){
    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    int p=search(nums,target);
    cout<<p;

}