#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,counter=0;
    cin>>n;

    for(i=5;i>0;i--){
        for(j=1;j<=200000;j++){
            if(n>=i){
                n-=i;
                counter++;
            }
            if(n<=0 || n<i){
                break;
            }
        }
    }
    cout<<counter<<endl;
}
