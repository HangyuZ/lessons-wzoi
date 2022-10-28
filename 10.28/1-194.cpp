#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    int q,n,maxi=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>q;
        if(maxi<q) maxi=q;
        a[q]++;
    }
    for(int i=0;i<=maxi;i++) cout<<a[i]<<endl;
    return 0;
}