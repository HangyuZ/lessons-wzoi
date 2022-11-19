#include <bits/stdc++.h>
using namespace std;
int x[100005] , y[100005];
int main() {
    int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d%d",&x[i],&y[i]);
	sort(y+1,y+n+1);
	sort(x+1,x+n+1);
	for(int i=1;i<=n;i++)x[i]=x[i]-(i-1);
	sort(x+1,x+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans +=abs(x[i]-x[n/2+1]);
		ans +=abs(y[i]-y[n/2+1]);
	}
	cout<<ans<<endl;
	return 0;
}