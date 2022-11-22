#include<bits/stdc++.h>
using namespace std;
void shi(int h,char p){
    for(int i=1;i<=h;i++) cout<<p;
    cout<<endl;
}
void kong(int h,char p){
    cout<<p;for(int i=1;i<=h-2;i++) cout<<' ';cout<<p<<endl;
}
int main(){
    int h,l,a;
    char p;
    cin>>l>>h;cin>>p;cin>>a;
    if(a==0){
        shi(h,p);
        for(int i=1;i<=l-2;i++) kong(h,p);
        shi(h,p);
    }
    else if(a==1){
        for(int i=1;i<=l;i++) shi(h,p);
    }
    return 0;
}