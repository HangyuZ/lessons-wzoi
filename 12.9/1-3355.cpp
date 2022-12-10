#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"Birthday is ";
    if(s[10]!='0') cout<<s[10];
    cout<<s[11]<<'/';
    if(s[12]!='0') cout<<s[12];
    cout<<s[13];
    return 0;
}