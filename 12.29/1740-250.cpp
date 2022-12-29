#include<bits/stdc++.h>
using namespace std;
map<string,int>mp1;
int main(){
    //freopen("1.in","r",stdin);
    string s;
    string smax;int ans=0;
    while(cin>>s){
        for(int i=0;i<=s.length()-1;i++)
            if(isupper(s[i])) s[i]+=32;
        if(!isalpha(s[s.length()-1]))
            s.erase(s.length()-1,1);
        //convert;
        mp1[s]+=1;
        if(mp1[s]>ans or (mp1[s]==ans and s<smax)){
            ans=mp1[s];
            smax=s;
        }
    }
    cout<<smax<<' '<<ans;
    //fclose(stdin);
    return 0;
}