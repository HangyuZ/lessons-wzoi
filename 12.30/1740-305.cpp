#include<bits/stdc++.h>
using namespace std;
map<string,int>t;
string s[100005];
int main(){
    int n,d;
    string a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        scanf("%d",&d);
        s[i]=s[i]+a+','+b+','+c;
        t[s[i]]=d;
    }
    sort(s+1,s+1+n);
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(s[i]!=s[i+1] or i==n) ans+=t[s[i]];
    }
    cout<<ans;
    return 0;
}