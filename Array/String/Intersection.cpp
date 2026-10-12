#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &a,vector<int> &b){
    unordered_map<int,int>mp;
    vector<int> ans;

    for(int i=0;i<a.size();i++){
        mp[a[i]]++;

    }

    unordered_map<int,int>mp1;
    for(int i=0;i<b.size();i++){
        mp1[b[i]]++;

    }
    for (int i = 0; i < a.size(); i++) {
    if (mp1.find(a[i]) != mp1.end()) {
        ans.push_back(a[i]);
        mp1.erase(a[i]);
    }
}
     
   
    return ans;

}
int main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> ans = intersection(a, b);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }


}