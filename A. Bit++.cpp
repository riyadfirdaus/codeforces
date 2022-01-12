#include <iostream>
using namespace std;

int main(){
    int n,x;
    x=0;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s=="X++" || s=="++X") x++;
        else x--;
    }
    cout<<x<<endl;
}
