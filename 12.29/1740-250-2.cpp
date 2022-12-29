#include<bits/stdc++.h>
using namespace std;
struct product{
    int profit,storage;
};
map<string,product>a;
int main(){
    int m,n;
    //freopen("1.in","r",stdin);
    cin>>m>>n;
    string s;int x,y;
    for(int i=1;i<=m;i++){
        cin>>s;cin>>x>>y;
        a[s].profit=x;a[s].storage=y;
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        cin>>s>>x;
        if(a[s].storage>=x) ans+=a[s].profit*x;
        else {ans=-i;break;}
    }
    cout<<ans;
    //fclose(stdin);
    return 0;
}