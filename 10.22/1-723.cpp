#include<bits/stdc++.h>
using namespace std;
int n,m,k;int x,y;
int main(){
    int a[10005];
    cin>>n>>m;
    for(int i=1;i<=n;i++) a[i]=i;
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    cout<<endl;
    for(int i=1;i<=m;i++){
        cin>>k;
        if(k==1){
            cin>>x>>y;
            swap(a[x],a[y]);
            for(int k=1;k<=n;k++) cout<<a[k]<<' ';
            cout<<endl;
        }
        else if(k==2){
            cin>>x;
            --n;
            for(int k=x;k<=n;k++) a[k]=a[k+1];
            for(int k=1;k<=n;k++) cout<<a[k]<<' ';
            cout<<endl;
        }
    }
    return 0;
}