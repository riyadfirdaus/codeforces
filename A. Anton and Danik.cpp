#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,tempa=0,tempd=0;
    char x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(x=='A'){
            tempa++;
        }
        else tempd++;
    }
    if(tempa>tempd){
        cout<<"Anton\n";
    }
    else if(tempd>tempa){
        cout<<"Danik\n";
    }
    else cout<<"Friendship\n";
}
