#include<bits/stdc++.h>
using namespace std;
int a[5]={0,5,4,2,1},x;
char c;
int main(){
    while(cin>>c){
        x=c-'0';
        for(int i=1;i<=4;i++){
            if(x>=a[i]) {cout<<1;x-=a[i];}
            else cout<<0;
        }
    }
	return 0;
}