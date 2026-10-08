#include<bits/stdc++.h>
using namespace std;
int countAl(string & s){
    int vowel=0;
    int consonant=0;
    int digit =0;
    int special =0;
    for(int i=0;i<s.size();i++){
        char ch=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            vowel++;
        }else if(ch>='a' & ch<='z'){
            consonant++;

        }else if(ch>='0' && ch<=9){
            digit++;
        }else{
            special++;
        }
    }
    cout<<"vowel="<<vowel;
    cout<<"consonent="<<consonant;
    cout<<"digit="<<digit;
    cout<<"special="<<special;
    
}
int main(){
    string s;cin>>s;
    countAl(s);
   
}