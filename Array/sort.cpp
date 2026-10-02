#include<bits/stdc++.h>
using namespace std;
vector<int> Ani(vector<int> & nums){
    int i=0;
    int j=0;
    int k=nums.size()-1;
    while(j<=k){
        if(nums[j]==0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }else if(nums[j]==1){
            j++;
        }else{
            swap(nums[j],nums[k]);
            k--;

        }
    }
    return nums;
    
}
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> suh = Ani(nums);

    for(int i = 0; i < suh.size(); i++) {
        cout << suh[i] << " ";
    }

    
}