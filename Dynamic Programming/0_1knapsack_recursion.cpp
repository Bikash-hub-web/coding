// 0/1 knapsack using recursion only

#include <bits/stdc++.h>
using namespace std;
int knapsack_rec(int wt[],int val[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    else if(wt[n-1]<=w){
        return max(val[n-1]+knapsack_rec(wt,val,w-wt[n-1],n-1),knapsack_rec(wt,val,w,n-1));

    }
    else if(wt[n-1]>w){
        return knapsack_rec(wt,val,w,n-1);

    }
    return 0;
}

int main(){
    int n,w;
    cin>>n>>w;
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int ans = knapsack_rec(wt,val,w,n);
    cout<<ans<<endl;
    return 0;
}