#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len=s.length();
    string a[100];
    int k=1;
    for(int i=0;i<=len-1;i++){
        if(s[i]!=' ' and s[i]!=',') a[k]+=s[i];
        else k++;
    }
    int mini=114514,maxi=0;int maxp,minp;
    for(int i=1;i<=k;i++){
        if(a[i].length()>maxi) {maxi=a[i].length();maxp=i;}
        if(a[i].length()<mini) {mini=a[i].length();minp=i;}
    }
    cout<<a[maxp]<<endl<<a[minp];
    return 0;
}