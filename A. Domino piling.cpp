#include <iostream>
using namespace std;

int main(){
    int m,n;
    int jum=0;
    int sisa=0;
    cin>>m>>n;
    jum=(n/2)*m;
    sisa=(n%2)*m;
    jum+=sisa/2;
    cout<<jum<<endl;
}
