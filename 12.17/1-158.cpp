#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;bool p=0;
    for(int i=0;i<s.length();i++){
        if(i==s.length()-1) p=1;
        else if(s[i]!=s[s.length()-i-1]) break;
    }
    if(p) cout<<"yes";
    else cout<<"no";
    return 0;
}