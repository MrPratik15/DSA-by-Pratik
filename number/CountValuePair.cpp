#include<bits/stdc++.h>
using namespace std;
int Count(vector<int> &n,int target)
{
    int i=0;
    int j=n.size()-1;
    int count = 0;
    while(i<j){
        int sum =n[i]+n[j];
        if (sum==target){
            count++;
            i++;
            j--;
        }else if(sum<target){
            i++;
            

        }else{
            j--;
        }

    }
    return count;
}

int main(){
    int target;
    cin>>target;
    int nums;
    cin>>nums;
    vector<int> n(nums);
    for(int i=0;i<nums;i++){
        cin>>n[i];

    }
    int ip=Count(n,target);
    cout<<ip;
}