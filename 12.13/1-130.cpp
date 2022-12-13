#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string a;
    getline(cin,a);
    int len=a.length();
    a+=a[0];
    for(int i=0;i<=len-1;i++){
        s+=(a[i]+a[i+1]);
    }
    cout<<s;
    return 0;
}