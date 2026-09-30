#include<bits/stdc++.h>
using namespace std;
int FirstOccurence(vector<int> & nums,int target){
    int i=0;
    int j=nums.size()-1;
    int ans=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if (nums[mid]==target){
            ans=mid;
            j=mid-1;
        }else if(nums[mid]>target){
         j=mid-1;

        }else{
            i=mid+1;
        }
        }
        return ans;
}
int lastOccurence(vector<int> & nums,int target){
        int i=0;
    int j=nums.size()-1;
    int ans=-1;
    while(i<+j){
        int mid=i+(j-i)/2;
        if (nums[mid]==target){
            ans=mid;
            i=mid+1;
        }else if(nums[mid]<target){
         i=mid+1;

        }else{
            j=mid-1;
        }
    }
        return ans;
    
}


int main(){
    int target;
    cin>>target;

    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0;i<n;i++){
      cin>>nums[i];

    }
    
   int a=FirstOccurence(nums,target);
   int p=lastOccurence(nums,target);
   cout<<a<<" "<<p;

}
