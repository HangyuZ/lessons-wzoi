#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    getline(cin,word);
    string s;
    getline(cin,s);
    s=s+' ';
    int pos=0,cnt=0;
    string now;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(now==word){
                cnt++;
                pos=cnt==1? i-word.length():pos;
            }
            now==" ";
        }
        else {
            if(s[i]>='A' and s[i]<='Z') now+=s[i]+32;
            else now+=s[i];
        }
    }
    if(cnt==0) cout<<"-1";
    else cout<<cnt<<endl<<pos;
    return 0;
}