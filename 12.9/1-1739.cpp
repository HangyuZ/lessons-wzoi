#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,flag1=0;
 char x,y,a[101][101];
 while(1){
  cin>>t;
  if(t==0){
   break;
  }
  cin>>x>>y;
  if(flag1){
   flag1++;
   cout<<endl;
  }
  int flag=1,m,n;
  m=(t+1)/2;
  n=(t+1)/2;
  int k;
  while(m){
   if(flag==1){
    k=x;
   }else{
    k=y;
   }
   for(int i=m;i<=n;i++){
    a[m][i]=k;
    a[n][i]=k;
    a[i][n]=k;
    a[i][m]=k;
   }
   m--;
   n++;
   flag*=-1;
  }
  if(t!=1){
   a[1][1]=a[1][t]=a[t][1]=a[t][t]=' ';
  }
  for(int i=1;i<=t;i++){
   for(int j=1;j<=t;j++){
    cout<<a[i][j];
   }
   cout<<endl;
  }
  cout<<endl;
 }
 return 0;
}