#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    cin>>a;
    int n=a.length();int k=0;
    for(int i=0;i<=n-1;i++){
        if(a[i]==a[i+1]) k++;
        else {k++;cout<<k<<a[i];k=0;}
    }
    return 0;
}