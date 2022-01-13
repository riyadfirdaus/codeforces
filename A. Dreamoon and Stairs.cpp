#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,i;
    cin>>m>>n;
    if(m<n)
        cout<<-1<<endl;
    else
        for(i=(m+1)/2;i<=m;i++){
            if(i%n==0){
                cout<<i<<endl;
                break;
            }
        }
}
