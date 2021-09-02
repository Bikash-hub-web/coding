#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        cout<<"perfect number";
    }
    else{
        cout<<"not perfect number ";
    }
    return 0;
}