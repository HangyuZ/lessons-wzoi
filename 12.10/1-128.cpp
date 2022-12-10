#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    double m,n;int p=0;
    cin>>m;
    cin>>a>>b;
    n=b.length();
    for(int i=0;i<=n-1;i++)
        if(a[i]==b[i]) p++;
    double k=p/n*1.0;
    if(k>=m) cout<<"yes";
    else cout<<"no";
    return 0;
}
