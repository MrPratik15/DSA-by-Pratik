#include<bits/stdc++.h>
using namespace std;
bool pallindrome(string & s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
      swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string s;cin>>s;
    string t=s;
    pallindrome(s);
    if(s==t){
        cout<<"pallindrome";
    }else{
        cout<<"not pallindrome";
    }
    
}