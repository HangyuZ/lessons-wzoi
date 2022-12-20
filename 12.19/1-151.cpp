#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2;
    getline(cin,s,',');
    getline(cin,s1,',');
    getline(cin,s2);
    int p1=s.find(s1);
    int p2=s.rfind(s2);
    int x=p1+s1.length()-1;
    if(p2<=x) cout<<"-1";
    else cout<<p2-x-1;
    return 0;
}