#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    string s;
    getline(cin,s);
    int k=1;
    int len=s.length();
    for(int i=0;i<=len-1;i++){
        if(isdigit(s[i])) a[k]=a[k]*10+s[i]-'0';
        else k++;
    }
    int sum=k;
    for(int i=1;i<=k;i++){
        if(a[i]==0) sum--;
    }
    cout<<sum<<endl;
    for(int i=1;i<=k;i++) {
        if(a[i]!=0) cout<<a[i]<<endl;
    }
    return 0;
}