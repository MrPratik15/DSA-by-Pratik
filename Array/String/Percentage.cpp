#include<bits/stdc++.h>
using namespace std;
double charpercentage(string & s,char target){
int count=0;
for(int i=0;i<s.size();i++){
    if(s[i]==target){
        count++;
    }
}
double percentage=(double)count/s.size()*100;
return percentage;
}
int main(){
    char target;cin>>target;
    string s;cin>>s;
   int ani= charpercentage(s,target);
    cout<<ani;
}
