#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n,i,j,counter=0;
    cin>>n;
    for(i=1;i<n;i++){
        x=n;
        x-=i;
        if(x%i==0){
            counter++;
        }
    }
    if(n==1){
        cout<<1<<endl;
    }
    else cout<<counter<<endl;
}
