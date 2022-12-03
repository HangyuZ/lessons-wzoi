#include<bits/stdc++.h>
using namespace std;
int a[10][10];
bool panduan(int m,int n){
    for(int i=1;i<=5;i++)
        if(a[m][i]>a[m][n]) return false;
    for(int j=1;j<=5;j++)
        if(a[j][n]<a[m][n]) return false;
    return true;
}
int s=0;
int main(){
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            cin>>a[i][j];
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++){
            if(panduan(i,j)) {cout<<i<<' '<<j<<' '<<a[i][j]<<endl;
            s=1;}
        }
    if(s==0){
        printf("not found");
    }
    return 0;
}