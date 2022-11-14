#include<bits/stdc++.h>
using namespace std;
struct person{
    int no;
	int score;
}p[100005];
int paixu(person a,person b){
    if(a.score!=b.score) return a.score>b.score;
    else return a.no<b.no;
}
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){cin>>p[i].no;cin>>p[i].score;}
    m*=1.5;
    sort(p+1,p+1+n,paixu);
    int i=0;
    while(i<=m-1||p[i].score==p[i+1].score){
        i++;
    }
    cout<<p[i].score<<' '<<i<<endl;
    i=0;
	while(i<=m-1||p[i].score==p[i+1].score){
        i++;
        cout<<p[i].no<<' '<<p[i].score<<endl;
    }
    return 0;
}