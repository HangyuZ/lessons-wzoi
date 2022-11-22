#include <bits/stdc++.h>
using namespace std;
int a[601];
int main() {
	int n,m,M,x;
	cin>>n>>m;
	for( register int i=1; i<=n; i++) {
		scanf("%d",&x);
		a[x]++;
		M=max(i*m/100,1);
		int num=0;
		for(register int j=600; j>=0; --j) {
			num+=a[j];
			if(num>=M) {
				printf("%d ",j);
				break;
			}
		}
	}
	return 0;
}