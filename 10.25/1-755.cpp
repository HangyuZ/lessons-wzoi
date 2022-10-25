#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10005];
    for(int i=1;i<=n;i++) cin>>a[i];
    int maxi=0;int p;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(maxi<a[i]){
                maxi=a[i];p=i;
            }
            }
    a[p]=0;printf("%d ",maxi);maxi=0;
    }
    return 0;
}