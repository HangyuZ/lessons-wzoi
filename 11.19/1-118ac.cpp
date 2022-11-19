#include <bits/stdc++.h>
using namespace std;
int a[10000];
int main() {
	int n,m,flag;
	cin>>n;
	m=n;
	flag=1;
	while(m>2) {
		int s=0;
		if(flag) {			
			for	(int i=1; i<=n; i++) {
				if(a[i]==0) s++;
				if(s==3) {
					a[i]=1;
					m--;
					s=0;
				}
			}
		} else {
			for(int i=n; i>=1; i--) {
				if(a[i]==0) s++;
				if(s==3) {
					a[i]=1;
					m--;
					s=0;
				}
			}
		}
		flag=!flag;
	}
	if(flag) {
		for(int i=1; i<=n; i++) {
			if(a[i]==0) {
				cout<<i;
				return 0;
			}
		}
	} else {
		for(int i=n; i>=1; i--) {
			if(a[i]==0) {
				cout<<i;
				return 0;
			}
		}
	}
}