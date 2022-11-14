#include<bits/stdc++.h>
using namespace std;
int a[505],b[505];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int k=0;
    for(int i=1;i<=n;i++){
        if(a[i]%2!=0) {k++;b[k]=a[i];}
    }
    cout<<b[1];
    for(int i=2;i<=k;i++) cout<<','<<b[i];
    return 0;
}