#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,s[10005];
    cin>>a;
    int m=1;
    string c;
    getline(cin,c);
    for(int i=0;i<=c.length();i++){
        if(c[i]!=' ') s[m]+=c[i];
        else m++;
    }
    int sum=0;int p=0;int first=0;
    for(int i=1;i<=m;i++){
        if(s[i].length()==a.length()){
            for(int j=0;i<=a.length()-1;j++){
                if(s[i][j]==a[j] or s[i][j]==a[j]+32 or s[i][j]==a[j]-32) ;
                else break;
                if(j==a.length()-1) {sum++;if(!first) {first=i;}}
            }
        }
    }
    for(int i=1;i<=first-1;i++) p+=(s[i].length()+1);
    p--;
    cout<<sum<<endl<<p;
    return 0;
}