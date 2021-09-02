// 0/1 knapsack with top downn only table

#include <bits/stdc++.h>
using namespace std;
int static t[1001][1001];
int knapsack_topdown(int wt[],int val[],int w,int n){
    // int t[n+1][w+1]; for intilization so increase with 1 size;
    for(int i=0;i<n+1;i++){
        t[i][0] = 0;        // base contd
    }
    for(int j=1;j<w+1;j++){
        t[0][j]=0;                  // base contd
    }
    for(int i=1;i<n+1;i++){
        for(int j =1;j<w+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else if(wt[i-1]>j){
                t[i][j]= t[i-1][j];
            }
        }
            
    }
    return t[n][w];

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
    int ans = knapsack_topdown(wt,val,w,n);
    cout<<ans<<endl;
}
