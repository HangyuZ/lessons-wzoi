#include <bits/stdc++.h>
using namespace std;
int n,a[101],m,k;
int main() {
    cin>>n;
    if(n>=0){
    	while(n){
		    a[++m]=n%2;
		    n/=2;
	    }
	    for(int i=8;i>=1;i--)cout<<a[i];
	    cout<<'\n';
	    for(int i=8;i>=1;i--)cout<<a[i];
	    cout<<'\n';
    }
    else{
    	n=-n;
    	while(n){
		    a[++m]=n%2;
		    n/=2;
		}
		a[8]=1;
		for(int i=7;i>=1;i--){
			a[i]=!a[i];
			if(a[i]==0)k=i;
		}
		for(int i=8;i>=1;i--)cout<<a[i];
	    cout<<'\n';
	    a[k]=1;
	    for(int i=k-1;i>=1;i--)a[i]=0;
	    for(int i=8;i>=1;i--)cout<<a[i];
	    cout<<'\n';
    }
	return 0;
}
