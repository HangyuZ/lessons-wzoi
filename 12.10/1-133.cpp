#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int len=n.length();
    char a,b;
    cin>>a>>b;
    for(int i=0;i<=len-1;i++){
        if(n[i]==a) n[i]=b;
    }
    cout<<n;
    return 0;
}
