#include<bits/stdc++.h>
using namespace std;
struct number{
    int num,no,rank;
}a[100005];
bool cmd1(number a,number b);
bool cmd2(number a,number b);
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {scanf("%d",&a[i].num);a[i].no=i;}
    sort(a+1,a+1+n,cmd1);
    for(int i=1;i<=n;i++) a[i].rank=i;
    sort(a+1,a+1+n,cmd2);
    for(int i=1;i<=n;i++) printf("%d ",a[i].rank);
    return 0;
}
bool cmd1(number a,number b){
    return a.num>b.num;
}
bool cmd2(number a,number b){
    return a.no<b.no;
}