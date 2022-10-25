#include<bits/stdc++.h>
using namespace std;
int a[10001],x,n,m;
void reverse(int j);
int main(){
    cin>>n>>m;
    for(int i=2;i<=m;i++) for(int j=i;j<=n;j+=i) reverse(j);
    for(int j=i;j<=n;j+=1) if(!a[i]) cout<<i;
    return 0;
}
void reverse(int j){
    if(a[j]) a[j]=0;
    else a[j]=1;
}