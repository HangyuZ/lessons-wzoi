#include<bits/stdc++.h>
using namespace std;
struct people{
    string name;
    int age;
    int num;
}young[100005],old[100005];
bool compareold(people a,people b);
int main(){
    int n;
    cin>>n;int o=0,y=0;int ag;string na;
    for(int i=1;i<=n;i++){
        cin>>na>>ag;
        if(ag>=60){old[++o].name=na;old[o].age=ag;old[o].num=i;}
        else {young[++y].name=na;young[y].age=ag;young[y].num=i;}
    }
    sort(old+1,old+1+o,compareold);
    for(int i=1;i<=o;i++){cout<<old[i].name<<endl;}
    for(int i=1;i<=y;i++){cout<<young[i].name<<endl;}
    return 0;
}
bool compareold(people a,people b){
    if(a.age!=b.age) return a.age>b.age;
    else return a.num<b.num;
}
