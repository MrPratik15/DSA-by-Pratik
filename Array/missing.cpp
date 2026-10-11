#include<bits/stdc++.h>
using namespace std;
int MissingNo(vector<int> &nums,int N){
    int total=N*(N+1)/2;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    return total-sum;

}
int main(){
    int N;cin>>N;
    int k;cin>>k;
    vector<int>nums(k);
    for(int i=0;i<k;i++){
        cin>>nums[i];
    }
    int p=MissingNo(nums,N);
    cout<<p;
}