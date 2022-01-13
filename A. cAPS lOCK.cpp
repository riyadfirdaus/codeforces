#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i;
    bool caps=1;
    cin>>s;
    for(i=1;i<s.length();i++){
        if(islower(s[i]))
            caps=0;
    }
    if(caps)
    for(i=0;i<s.length();i++){
        if(islower(s[i]))
            putchar(toupper(s[i]));

        else if(isupper(s[i]))
            putchar(tolower(s[i]));
    }
    else cout<<s;
    cout<<endl;
}
