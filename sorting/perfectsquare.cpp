#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag =0;
    for(int i=1;i<=n;i++){
        if(i*i==n){
            cout<<"perfect square "<<endl;
           
            flag =1;
            break;
        }
    }
    if(!flag){
        cout<<"not perfect square "<<endl;
    }
}