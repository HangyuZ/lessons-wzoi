#include<bits/stdc++.h>
using namespace std;
int m,n;
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};
int a[5][10][10];
int main(){
     cin>>m>>n;
     a[0][5][5]=m;
    for(int k=1;k<=n;k++){
         for(int i=1;i<=9;i++)
          for(int j=1;j<=9;j++)
          {
              a[k][i][j]=2*a[k-1][i][j];
             for(int l=0;l<8;l++)
            {
               int nx=i+dx[l],ny=j+dy[l];
                 if(nx>0&&nx<=9&&ny>0&&ny<=9)
                 a[k][i][j]+=a[k-1][nx][ny];
             }
          }
     }
    for(int i=1;i<=9;i++)
     {
         for(int j=1;j<=9;j++)
        cout<<a[n][i][j]<<' ';
        cout<<endl;
     }
 }