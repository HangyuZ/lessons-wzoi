#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],b[1005][1005],c[1005][1005];
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=k;j++)
            scanf("%d",&b[i][j]);
// getin()
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
             for(int p=1;p<=m;p++)
            c[i][j]+=a[i][p]+b[i][p];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++)
            printf("%d ",c[i][j]);
        printf("\n");}
    return 0;
}