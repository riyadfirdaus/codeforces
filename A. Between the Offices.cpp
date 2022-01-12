#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,i,s=0,f=0;
    char temp,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(i==1){
            temp=x;
        }
        if(temp!=x && x=='S'){
            s++;
        }
        else if(temp!=x && x=='F'){
            f++;
        }
        temp=x;
    }
    if(f>s){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
