#include<bits/stdc++.h>
using namespace std;
int vis[1000001],prime[1000001],x=0,n;
int main(){
    cin>>n;
    for(int i=2;i<=n;i++){
        if(vis[i]==0){
            prime[++x]=i;
            for(int j=2*i;j<=n;j+=i) vis[j]=1;
        }
    }
    printf("%d\n",x);
    for(int i=1;i<=x;i++) printf("%d ",prime[i]);
    return 0;
}