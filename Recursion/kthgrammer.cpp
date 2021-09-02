#include <bits/stdc++.h>
using namespace std;
int solve(int n,int k){
    if(n==1 || k==1){
        return 0;
    }
    int mid =pow(2,n-1);
    if(k<=mid){
        return solve(n-1,k-1);
    }
    else{
        return !solve(n-1,k-mid);
    }
   
}

int main(){
    // int n,k;
    // cin>>n>>k;
    // int ans = solve(n,k);
    // cout<<ans<<endl;
    int a = 0;
    cout<<!a<<endl;
    return 0;
}