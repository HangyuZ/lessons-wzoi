#include<bits/stdc++.h>
using namespace std;
string s;
bool check(string s,int a,int b){
    for(int i=a;i<=b;i++){
        if(s[i]!=s[b+a-i]) return 0;
    }
    for(int i=a;i<=b;i++) cout<<s[i];
    cout<<endl;
    return 1;
}
int main(){
    cin>>s;
    int len=s.length();
    for(int i=2;i<=len;i++){
        for(int j=0;j<=len-i;j++){
            check(s,j,j+i-1);
        }
    }
    return 0;
}