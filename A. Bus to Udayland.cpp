#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=3,y=3,i,j,n;
    cin>>n;
    string a[n][3],seat;
    for(i=0;i<n;i++){
        for(j=0;j<=2;j++){
            cin>>seat;
            if(seat!="|"){
                a[i][j]=seat;
            }
            if(seat=="OO"){
                x=i;
                y=j;
            }
        }
    }
    if(x!=3 && y!=3){
        a[x][y]="++";
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                if(j==0){
                    cout<<a[i][j]<<" | ";
                }
                else cout<<a[i][2]<<endl;
            }
        }
    }
    else cout<<"NO\n";

}
