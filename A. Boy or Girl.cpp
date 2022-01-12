#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,jum;
    cin>>k>>n>>w;
    jum=k*w*(w+1)/2;
    if(jum>n){
        printf("%d\n",jum-n);
    }
    else cout<<0<<endl;
}
