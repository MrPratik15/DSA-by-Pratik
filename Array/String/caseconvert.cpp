#include<bits/stdc++.h>
using namespace std;
bool convertcase(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }else{
            s[i]=s[i]+32;
        }
    }
    return true;
}
int main(){
    string s;cin>>s;
    convertcase(s);
    cout<<s;
}