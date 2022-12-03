#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    int sum=0;
    for(int i=1;i<=m;i++) {sum+=a[i][1];sum+=a[i][n];}
    for(int j=1;j<=n;j++) {sum+=a[1][j];sum+=a[m][j];}
    sum=sum-a[1][1]-a[m][1]-a[1][n]-a[m][n];
    cout<<sum;
    return 0;
}