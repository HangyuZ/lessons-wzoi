#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[16],b[16];int t[15][10005],p[15][10005];int x[100];
    for(int i=1;i<=8;i++) {
	    cin>>a[i];
	    b[i]=a[i];
	    if (a[i]<0) {a[i]=-a[i];x[i]=-1;}
	}
    for(int i=1;i<=8;i++){ 
        p[i][0]=0;t[i][0]=0;
        while(a[i]>0){
            t[i][++t[i][0]]=a[i]%8;
            a[i]/=8;
        }
        while(b[i]>0){
            p[i][++p[i][0]]=b[i]%16;
            b[i]/=16;
        }
        if (x[i]==-1) cout<<'-';
        for(int j=t[i][0];j>=1;j--) cout<<t[i][j];
        cout<<' ';
        if (x[i]==-1) cout<<'-';
        for(int j=p[i][0];j>=1;j--){
            if (p[i][j]<=9) cout<<p[i][j];
            else if(p[i][j]==10) cout<<'a';
            else if(p[i][j]==11) cout<<'b';
            else if(p[i][j]==12) cout<<'c';
            else if(p[i][j]==13) cout<<'d';
            else if(p[i][j]==14) cout<<'e';
            else if(p[i][j]==15) cout<<'f';
        }
        cout<<endl;
    }
    return 0;
}
