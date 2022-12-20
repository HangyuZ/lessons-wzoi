#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,s[10005];
    getline(cin,a);
    int len=a.length();
    int k=1;
    for(int i=0;i<=len-1;i++){
        if(a[i]!=' ') {s[k]=a[i]+s[k];}
        if(i==len-1 or a[i]==' '){
            k++;
            cout<<s[k-1]<<' ';
        }
    }
    return 0;
}
