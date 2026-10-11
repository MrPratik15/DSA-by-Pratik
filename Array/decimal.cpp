#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    int deciaml =0;
    int power =1;   
    while(n>0){
        int digit =n%10;
        deciaml=deciaml+digit*power;
        power*=2;
        n/=10;

    }
    return deciaml;
}
int main() {
    int n;
    cin >> n;

    cout << binarytodecimal(n);

    return 0;
}