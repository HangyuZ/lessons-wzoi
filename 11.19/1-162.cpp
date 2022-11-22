#include<bits/stdc++.h>
using namespace std;
void output(int a,int b){
    cout<<'('<<a<<','<<b<<')'<<' ';
}
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++) output(x,i);
    cout<<'\n';
    for(int i=1;i<=n;i++) output(i,y);
    cout<<'\n';
    if(x>y){
        int a=1;
        while(a+x-y<=n){
            output(a+x-y,a);
            a++;
        }
        cout<<'\n';
        a=4;
        while(x+y-a>=1 and a>=1){
            output(a,x+y-a);
            a--;
        }   
    }
    else{
        int a=1;
        while(a-x+y<=n){
            output(a,a-x+y);
            a++;
        }
        cout<<'\n';
        a=4;
        while(x+y-a>=1 and a>=1){
            output(a,x+y-a);
            a--;
        }       
    }
    return 0;
}