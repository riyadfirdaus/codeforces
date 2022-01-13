#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=5,it=1,n,orang;
    cin>>n;
    while(n>x){
        n-=x;
        it++;
        x*=2;
    }
    orang=(int)(n)/(int)it;
    if(n<5) n--;
    cout<<orang<<" ";
    if(orang==0) cout<<"Sheldon";
    if(orang==1) cout<<"Leonard";
    if(orang==2) cout<<"Penny";
    if(orang==3) cout<<"Rajesh";
    if(orang==4) cout<<"Howard";

}
