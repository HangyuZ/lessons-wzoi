#include<bits/stdc++.h>
using namespace std;
int b[5005][5005];int a[5005][5005];
int  main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+(a[i][j]==0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<b[i][j]<<' ';
            cout<<endl;}
    return 0;
}