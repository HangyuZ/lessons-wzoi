#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[50][50];
	cin>>n;
    a[1][n]=1;
     int i=2,x=1,y=n;
    while(i<=(2*n-1)*(2*n-1))//余数走不通 
    {
         if((x==1&&y==2*n-1)||a[x-1][y+1]) x+=1;
         else if(x==1) x=2*n-1,y+=1;
         else if(y==2*n-1) x-=1,y=1;
        else x-=1,y+=1;
         a[x][y]=i++;
     }
    for(int k=1; k<=2*n-1; k++)
     {
         for(int l=1; l<=2*n-1; l++)
             cout<<a[k][l]<<' ';
         cout<<endl;
     }
	return 0;
} 