#include<bits/stdc++.h>
using namespace std;
bool perfect(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum=sum+i;
           
        }
    }
     if(sum==n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(perfect(n)){
        cout<<"true";
    }else{
        cout<<"false";
    }

}