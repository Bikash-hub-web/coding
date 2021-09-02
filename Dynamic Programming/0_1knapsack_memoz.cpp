// 0/1 knapsack with memoization (RC + Tables)
#include <bits/stdc++.h>
using namespace std;

int static t[1001][1001];
int knapsack_memo(int wt[],int val[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    else if(t[n][w]!=-1){
        return t[n][w];
    }
    else if(wt[n-1]<=w){
        return t[n][w] = max(val[n-1]+knapsack_memo(wt,val,w-wt[n-1],n-1),knapsack_memo(wt,val,w,n-1));

    }
    else if(wt[n-1]>w){
        return t[n][w]=knapsack_memo(wt,val,w,n-1);

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
    memset(t,-1,sizeof(t));
    int ans = knapsack_memo(wt,val,w,n);
    cout<<ans;
    return 0;
}