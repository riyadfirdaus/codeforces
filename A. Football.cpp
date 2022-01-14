#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,i,count=0;
    string s;
    char temp;
    cin>>s;
    temp=s[0];
    for(i=1;i<s.length();i++){
        if(s[i]==temp)
            count++;
        temp=s[i];
    }
    if(count>=7) cout<<"YES\n";
    else cout<<"NO\n";
}
