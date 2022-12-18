#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    if(s[len-3]=='i' and s[len-2]=='n' and s[len-1]=='g')
        s.erase(len-3);
    else if((s[len-2]=='e' and s[len-1]=='r') or (s[len-2]=='l' and s[len-1]=='y'))
        s.erase(len-2);
    cout<<s;
    return 0;
}