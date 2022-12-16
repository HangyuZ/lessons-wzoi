#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;string s2=s1;
    s2.erase(12,1);
    s1.erase(1,1);s1.erase(4,1);s1.erase(9,1);
    int ans=0;
    for(int i=0;i<=8;i++){
        ans+=(s1[i]-'0')*(i+1);
    }
    int mod=ans%11;
    if(s1[9]==mod||(s1[9]=='X'&&mod==10))
        cout<<"Right";
    else if(mod!=10) cout<<s2<<mod;
    else if(mod==10) cout<<s2<<'X';
    return 0;
}