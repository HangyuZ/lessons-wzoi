#include <bits/stdc++.h>
using namespace std;
#define LL long long  //可以使用LL定义长整型变量

int main() {
	int n;
	cin>>n;
	int a[n],x,cnt=0;
	for (int i=1;i<=n;i++) cin>>a[i];
	cin>>x;
	int L=1,R=n;
	while(L<=R){
		int mid =(L+R)/2;
		cnt++;
		if (a[mid]==x){
			cout<<mid<<" ";
			cout<<cnt;
			return 0;
		}
		if (a[mid]<x) L=mid+1;
		else R =mid-1;
	}
	return 0;
}