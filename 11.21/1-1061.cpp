#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
// tips if you define a[10005][10005],actually
// you used 10005*10005 memory,a large one right?
int main(){
    a[1][1]=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) a[i][1]=1;
    a[2][2]=1;
    for(int i=3;i<=n;i++)
        for(int j=2;j<=i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}