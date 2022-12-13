#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int len=a.length();
    if(isdigit(a[0])) {cout<<"no";return 0;
}
    for(int i=0;i<=len-1;i++){
        if(isalnum(a[i])||a[i]=='_'){
		}
        else {cout<<"no";return 0;}
    }
    cout<<"yes";
    return 0;
}