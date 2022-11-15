#include<bits/stdc++.h>
using namespace std;
struct card{
    int data[15];
    int num;
    int rank;
}a[100005]
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin<<a[i].data[j];
        a[i].num=i;}
    sort(a+1,a+1+n,paixu);
    
}