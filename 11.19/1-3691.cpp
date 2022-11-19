#include <bits/stdc++.h>
using namespace std;
int n,c[6][6],x,y;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x>>y;
		if(i%2==0) {
			c[x][y]=2;
			for(int j=1; j<=5; j++)
				printf("[%d, %d, %d, %d, %d]\n",c[j][1],c[j][2], c[j][3], c[j][4], c[j][5]);
			cout<<'\n';
		} else {
			c[x][y]=1;
			for(int j=1; j<=5; j++)
				printf("[%d, %d, %d, %d, %d]\n",c[j][1], c[j][2], c[j][3], c[j][4], c[j][5]);
			cout<<'\n';
		}
	}

	return 0;
}