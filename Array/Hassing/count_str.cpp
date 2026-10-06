#include<bits/stdc++.h>
using namespace std;
vector<int> coustr(vector<char>& s){
    unordered_map<int,int>mp;
    vector<int> ans;
     for(int i=0;i<s.size();i++){
        mp[s[i]]++;

     }for(int i=0;i<s.size();i++){
        ans.push_back(mp[s[i]]);
     }
     return ans;
}
int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];

    }
    vector<int> p=coustr(s); 
    
    for(int i=0;i<p.size();i++){
        cout<<p[i];
    }
}  
    