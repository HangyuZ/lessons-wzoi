#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    for(int i=1;i<=len-1;i++){
        if(a[i]==' '&&a[i-1]==' ') {a.erase(i,1);i--;}
    }
    cout<<a;
    return 0;
}