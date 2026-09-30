#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j =1;
        int count =1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }else{
                nums[i+1]=nums[j];
                i++;
                j++;
                count++;
            }
        }
        return count;
        
    }
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];

    }
    int p = removeDuplicates(nums);
    for (int i=0;i<p;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<p;
}

