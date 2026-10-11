#include<bits/stdc++.h>
using namespace std;
//define function
int removeDublicates(vector<int>& nums, int target){
    int k =0;
    for (int i=0; i<nums.size(); i++){
        if (nums[i] != target){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main (){
    int target;
    cin>>target;
    
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>> nums[i];

    }
    int qwe= removeDublicates(nums,target);
    for (int i=0;i<qwe;i++){
        cout<< nums[i]<<" ";
    }
    cout<<endl;
    cout<< qwe;


}