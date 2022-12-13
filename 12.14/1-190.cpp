#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    getline(cin,s);
    for(int i=0;i<s.length();i+=3){
        int x=s[i],y=s[i+1],z=s[i+2];
        int a=x/4;
        int b=x%4*16+y/16;
        int c=y%16*4+z/64;
        int d=z%64;
        cout<<s2[a]<<s2[b]<<s2[c]<<s2[d];
    }
    return 0;
}