#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   int len1=s1.length(),len2=s2.length();
   int maxi=0,sum=0;bool p=true;;
   for(int i=0;i<=len1-1;i++){
    for(int j=0;j<=len2-1;j++){
        if(s1[i]==s2[j] or p) {sum++;p=false}
        else continue;
    }
   }
}