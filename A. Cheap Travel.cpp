#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    int jum=0;
    cin>>n>>m>>a>>b;
    if(b<a){
        jum+=(n/m)*b;
        if(n%m!=0)
            jum+=b;
        n=0;
    }
    else if(b/m<a){
        if(n<m && (n*a>b)){
            jum=b;
            n=0;
        }
        else{
            jum+=(n/m)*b;
            n-=(n/m)*m;
        }
    }
    else{
        jum=n*a;
        n=0;
    }
    if(n>0)
        jum+=n*a;
    cout<<jum<<endl;
}
