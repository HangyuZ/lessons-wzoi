#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
void jiaohuan(int x,int y,int z);
int main(){
    int n,m,k;int x,y,z;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>k;
        if(k==2){
            cin>>x>>y;
            swap(a[x],a[y]);
        }
        else if(k==1){
            cin>>x>>y;
            a[x]+=y;
        }
        else if(k==3){
            cin>>x>>y>>z;
            jiaohuan(x,y,z);
        }
    }
    for(int k=1;k<=n;k++) cout<<a[k]<<' ';
    cout<<endl;
    return 0;
}
void jiaohuan(int x,int y,int z){
    for(int i=x;i<=y;i++) b[i]=a[i];
    for(int i=(x+z);i<=(y+z);i++) a[i-z]=a[i];
    for(int i=(x+z);i<=(y+z);i++) a[i]=b[i-z];
}