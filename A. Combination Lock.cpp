#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x,y,jum=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0;i<n;i++){
        x=(int)a[i]-48;
        y=(int)b[i]-48;
        if(abs(x-y)<=5)
            jum+=abs(x-y);
        else jum+=min(x,y)+10-max(x,y);
    }
    cout<<jum<<endl;
}
