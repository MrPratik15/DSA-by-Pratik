#include<bits/stdc++.h>
using namespace std;
vector<int> frequency(string &s){

    unordered_map<char,int>mp;
    vector<int>ans;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++; 
    }
    for(int i=0;i<s.size();i++){
        ans.push_back(mp[s[i]]);

    }
    return ans;

}
int main(){
    string s;
    cin >> s;
    vector<int>ans= frequency(s);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

}