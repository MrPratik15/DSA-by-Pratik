#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> mp;

    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;

        if(mp[nums[i]] > nums.size() / 2) {
            return nums[i];
        }
    }

    return -1;
}
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=majorityElement(nums);
    cout<<p;

}