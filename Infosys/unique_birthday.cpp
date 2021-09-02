#include <bits/stdc++.h>

using namespace std;
int solve(int n,int k){
    int c =0;
    if(k==1){
        return n%10000;
    }
    else if(k>n){
        return 0;
    }else{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j%i==0){
                c =(c+1)%10000;
            }
        }
    }
    }
    return c;
}

int main(){
    int n,k;
    cin>>n>>k;
    int ans = solve(n,k);
    cout<<ans<<endl;
    return 0;
}