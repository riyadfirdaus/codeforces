#include<bits/stdc++.h>
using namespace std;

int main(){
    bool bw=true;
    char color;
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cin>>color;
            if(color=='C' || color=='M' || color== 'Y')
                bw=false;
        }
    }
    if(bw)
        cout<<"#Black&White\n";
    else
        cout<<"#Color\n";
}
