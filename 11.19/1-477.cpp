#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m;
int main(){
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) cin>>a[j][i];
	}
	int ans=1e9;
	for(int i=1; i<=m; i++) {
		sort(a[i]+1,a[i]+1+n);
		int d=a[i][2]-a[i][1];
		int f=1;
		for(int j=3; j<=n; j++) if(a[i][j]-a[i][j-1]!=d) f=0;
		if(f && d<ans) ans=d;
	}
	if(ans==1e9) cout<<"NO";
	else cout<<ans;
	return 0;
}