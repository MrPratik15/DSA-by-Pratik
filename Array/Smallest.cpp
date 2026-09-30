#include<bits/stdc++.h>
using namespace std;
int smallest(vector<int> & n){
    int mini=INT_MAX;
    for(int i=0;i<n.size();i++){
        mini=min(mini,n[i]);

    }
    return mini;

}int main(){
    int nums;
    cin>>nums;
    vector<int> n(nums);
    for (int i=0;i<nums;i++){
        cin>>n[i];
    }
    int p=smallest(n);
    cout<<p;
}