#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int len=a.length();
    int k=len%3;
    if(len>=3){if(k!=0) {
	    for(int i=0;i<=k-1;i++) cout<<a[i];
        cout<<',';
		}
    for(int i=k;i<=len-2;i++){
        cout<<a[i];
        if(((i-k+1)%3==0)&&(i!=len)) cout<<',';
    }
    cout<<a[len-1];}
    else cout<<a;
    return 0;
}