#include<bits/stdc++.h>
using namespace std;
int main(){
    string name[1005];
    char city[1005];
    int num[1005];
    int n;
    int date[1005];
    cin>>n;
    string s[1005];double k;
    char p[4];
    for(int i=1;i<=n;i++){
        cin>>p[1]>>p[2]>>p[3]>>p[4];
        cin>>city[i];
        cin>>p[1];
        cin>>s[i];
        for(int j=4;j>=0;j--) 
            if(isdigit(s[i][j])){
                num[i]=s[i][j]-'0';break;
            }
        cin>>name[i];
        cin>>k;
        cin>>date[i];
    }
    cout<<"license number owner's name"<<endl;
    for(int i=1;i<=n;i++){
        if(date[i]==6 or date[i]==7) continue;
        else if(city[i]!='B') {
            cout<<"city"<<city[i]<<'.'<<s[i]<<' ';
            cout<<name[i]<<endl;
            continue;
        }
        else if(date[i]==num[i] or (date[i]==5 and num[i]==0) or date[i]==10-num[i]){
            cout<<"city"<<city[i]<<'.'<<s[i]<<' ';
            cout<<name[i]<<endl;
            continue;
        } 
    }
    return 0;
}