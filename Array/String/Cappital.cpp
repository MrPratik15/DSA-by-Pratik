#include<bits/stdc++.h>
using namespace std;
bool detectCaptial(string & s){
    int capital=0;\
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
        capital++;
    }
}
if(capital==s.size()){
    return true;
}
else if(capital==0){
    return true;
}else if(capital==1 && isupper(s[0])){
    return true;
}else{
return false;
}
}
int main(){
    string s;cin>> s;
    if(detectCaptial(s)){
        cout<<"true"<<" ";

    }else{
        cout<<"false"<<' ';
    }
   
}
