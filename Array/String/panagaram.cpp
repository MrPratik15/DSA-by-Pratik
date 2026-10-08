#include<bits/stdc++.h>
using namespace std;

bool Panagram(string &s){
    int freq[26] = {0};
    for(int i = 0; i < s.size(); i++){
        char ch = tolower(s[i]);
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] == 0){
             return false;
            }
    }
    return true;
}
int main(){
    string s;cin>>s;
    if(Panagram(s)){
        cout<<"Panagram";
    }else{
        cout<<"Not panagram";
    }
}