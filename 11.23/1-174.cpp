#include<bits/stdc++.h>
using namespace std;
int b[105][105];
void add(int i,int j){b[i][j]++;}
int main(){
    int n,m;char x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>x;
            if(x=='*') {
                b[i][j]=10;
                add(i+1,j);
                add(i-1,j);
                add(i,j+1);
                add(i,j-1);
                add(i+1,j+1);
                add(i+1,j-1);
                add(i-1,j+1);
                add(i-1,j-1);
        } 
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(b[i][j]>=10) cout<<'*';
            else cout<<b[i][j];
        }cout<<endl;
        }
    return 0;
}