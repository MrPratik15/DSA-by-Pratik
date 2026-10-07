#include<bits/stdc++.h>
using namespace std;
bool isAanagram(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    unordered_map<char,int>mp1;
    for(int i=0;i<t.size();i++){
    mp1[t[i]]++;
    }
    if(mp==mp1){
        return true;
    }else{
        return false;
    }   
}
int main(){
    string t;cin>>t;
    string s;cin>>s;
    if(isAanagram(s,t)){
        cout<<"anagram";
    }else{
        cout<<"not anagram";
    }

}