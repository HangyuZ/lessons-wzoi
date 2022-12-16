#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.find(s2)!=-1)
        {cout<<s2<<" is substring of "<<s1;return 0;}
    if(s2.find(s1)!=-1)
        {cout<<s1<<" is substring of "<<s2;return 0;}
    cout<<"No substring";
    return 0;
}