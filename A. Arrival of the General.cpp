#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,maks,x,minm,maksi,mini,it=1,i;
    cin>>n;
    cin>>maks;
    minm=maks;
    mini=it;
    maksi=it;
    for(i=1;i<n;i++){
        cin>>x;
        it++;
        if(maks<x){
            maks=x;
            maksi=it;
        }
        if(minm>=x){
            minm=x;
            mini=it;
        }
    }
    if(mini>maksi)
        cout<<n-mini+maksi-1<<endl;
    else cout<<n-mini+maksi-2<<endl;

}
