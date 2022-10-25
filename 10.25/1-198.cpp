#include<bits/stdc++.h>
using namespace std;
int a[100001],x,n;
int main(){
    cin>>int n,m,k;
    while(n--){
        scanf("%d",&x);
        if(a[x]==0) printf("%d ",x);
        a[x]=1;
    }
    return 0;
}