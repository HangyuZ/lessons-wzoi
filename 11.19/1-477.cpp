#include<bits/stdc++.h>
using namespace std;
int a[10005][10005];
int main(){
    int m,n;int delta,min=100000000;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("&d",&a[i][j]);
    for(int i=1;i<=n;i++){
        sort(a[i]+1,a[i]+i+m);
        delta=a[i][2]-a[i][1];
        for(int j=1;j<=m;j++)
    }
}