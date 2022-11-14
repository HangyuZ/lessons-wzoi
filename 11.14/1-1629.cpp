#include <bits/stdc++.h>
using namespace std;
#define LL long long  //可以使用LL定义长整型变量
int a[10],k=0;
int main() {
    for(int i=123;i<=329;i++){
    	int x=i,y=2*i,z=3*i;
    	for(int j=1;j<=9;j++)a[j]=0;
    	while(x){
    		a[x%10]=1;
    		x/=10;
		}
		while(y){
    		a[y%10]=1;
    		y/=10;
        }
        while(z){
    		a[z%10]=1;
    		z/=10;
        }
        int s=0;
    	for(int j=1;j<=9;j++)s+=a[j];
    	if(s==9){k++;
    		cout<<i<<endl;
    		cout<<2*i<<endl;
    		cout<<3*i<<endl;
    		cout<<endl;
		}
	}
	cout<<k;
	return 0;
}