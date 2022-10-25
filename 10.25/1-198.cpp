#include<bits/stdc++.h>
using namespace std;
int a[200005];bool p[200005]={false};
int main(){
    int n;int x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(!p[x]) {a[i]=x;p[x]=true;}
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=0) printf("%d ",a[i]);
    }
    return 0;
}