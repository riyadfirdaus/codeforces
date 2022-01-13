#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x,mid;
    cin>>n>>x;
    mid=(n+1)/2;
    if(x>mid){
        x-=mid;
        cout<<x*2<<endl;
    }
    else cout<<x*2-1<<endl;
}
