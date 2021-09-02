#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int c ;
    cin>>n;
    for(int i=2;i<=n;++i){
        c=0;
        for(int j=2;j<=sqrt(i);++j){
            if(i%j==0){
                c=1;
            }
        }
        if(c==0){
            cout<<i<<" ";
        }
    }
    return 0;
}