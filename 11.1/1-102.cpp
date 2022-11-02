#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10005];
    cin>>n;
    int i=1;
    if(n==0){
    	cout<<0<<endl<<1;
    	return 0;
	}
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=1;j--) cout<<a[j];
    cout<<endl;
    int sum=0,maxi=0;
    for(int k=1;k<=i;k++){
        if(a[k]==0) {sum++;if(sum>maxi) maxi=sum;}
        else sum=0;
    }
    cout<<maxi;
    return 0;
}