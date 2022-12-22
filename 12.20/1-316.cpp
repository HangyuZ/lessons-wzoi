#include<bits/stdc++.h>
using namespace std;
int look(string s,string a){
    for(int i=0;i<=s.length()-a.length()-1;i++){
        for(int j=1;j<=a.length();j++){
            if(s[i+j]!=a[j] and s[i+j]-32!=a[j] and s[i+j]!=a[j]-32) break;
            if(j==a.length()) return i;
        }
        if(i==s.length()-a.length()-1) return -1;
    }
    return -1;
}
int main(){
    int flag=0;
    freopen("test.in","r",stdin);
    string s;
    string a;
    getline(cin,a);
    getline(cin,s);
    string p=s;int sum=1;
    int k=look(s,a);
    if(k==-1) {cout<<k;return 0;}
    else {
        s.erase(k,a.length());
        while(int(look(s,a))!=-1){
            sum++;
            s.erase(look(s,a),a.length());
        }
    }
    cout<<sum<<endl<<k;
    fclose(stdin);
    return 0;
}