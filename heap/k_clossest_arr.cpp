#include <bits/stdc++.h>
using namespace std;

void k_closest_arr(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> mxhp;
    for(int i=0;i<n;i++){
        mxhp.push({abs(arr[i]-x),arr[i]});
        if(mxhp.size()>k){
            mxhp.pop();
        }
    }
    while(mxhp.size()!=0){
        cout<<mxhp.top().second<<" ";
        mxhp.pop();
    }
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k_closest_arr(arr,n,k,x);
    return 0;
}