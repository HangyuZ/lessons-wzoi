#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],b[1005][1005],c[1005][1005];
int main(){
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            scanf("%d",&b[i][j]);
    for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            c[i][j]=a[i][j]+b[i][j];
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++)
            printf("%d ",c[i][j]);
        printf("\n");}
    return 0;
}