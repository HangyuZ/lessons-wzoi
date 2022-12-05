#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,b,o=1,k=1,a[101][101];
    cin>>n;
    b=2*n-1;
    for(i=0;i<=b;i++){
        if(i%2==0&&i<n){
			for(j=0;j<=i;j++){
                a[i-j][j]=o;
                o++;
            }
        }else if(i%2==1&&i<n){
            for(j=0;j<=i;j++){
                a[j][i-j]=o;
                o++;
            }
        }else if(i%2==0&&i>=n){
            for(j=0;j<n-k;j++){
                a[i-j-k][j+k]=o;
                o++;
            }
            k++;
        }
        else if(i%2==1&&i>=n){
            for(j=0;j<n-k;j++){
                a[j+k][i-j-k]=o;
                o++;
            }
            k++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
	return 0;
} 