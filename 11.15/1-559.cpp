#include<bits/stdc++.h>
using namespace std;
struct data{
	int x[11],num;
};
data a[50005];
int n,m;
bool cmp(data a,data b){
	for (int i=1;i<=m;i++)
	if (a.x[i]>b.x[i]) return true;
	else if (a.x[i]<b.x[i]) return false;
    return a.num<b.num;
}
int main() {
	scanf ("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		a[i].num =i;
		for (int j=1;j<=m;j++) scanf("%d",&a[i].x[j]);
	}
	sort(a+1,a+n+1,cmp);
	for(int i =1;i<=n;i++)
	printf("%d ",a[i].num);
	
	return 0;
}