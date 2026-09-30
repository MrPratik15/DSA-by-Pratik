#include<bits/stdc++.h>
using namespace std;

void ReversString(vector<char> & s){
    int i=0;
    int j=s.size()-1;
    while (i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
        /* code */
    }
    
}
int main(){
   int n;
   cin>>n;

   vector<char> s(n);
   for(int i=0;i<n;i++){
    cin>>s[i];

   }
   vector<char>v=s;
   ReversString(s);
   if(v==s){
    cout<<"pelindrome";
   }else{
    cout<<"ma chudao";
   }
}