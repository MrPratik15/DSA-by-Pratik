#include<bits/stdc++.h>
using namespace std;
string removeSpace(string &s){
    string ans=" ";
    for(int i=0;i<s.size();i++){
        if (s[i]!=' '){
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    string z=removeSpace(s);
    cout<<z;
}