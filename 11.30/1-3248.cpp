#include<bits/stdc++.h>
using namespace std;
int b[105][105];
int main(){
    int a[105];
    int n;
    cin>>n;
    a[1]=1;
    for(int i=2;i<=101;i++) a[i]=a[i-1]+i;// get delta number
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=i;j>=1;j--)
            b[i][j]=a[i]-j+1;
        }
        else {
            for(int j=1;j<=i;j++)
            b[i][j]=a[i]+j-i;
        }
    }
    for(int i=1;i<=n;i++)
        {for(int j=1;j<=i;j++)
            cout<<b[i][j]<<' ';
        cout<<endl;}
        return 0;
}