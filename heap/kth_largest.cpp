#include <bits/stdc++.h>
using namespace std;

int kth_largest(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> minhp;
    for(int i=0;i<n;i++){
        minhp.push(arr[i]);
        if(minhp.size()>k){
            minhp.pop();
        }
    }
    return minhp.top();
}
int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = kth_largest(arr,n,k);
    cout<<ans<<endl;
    return 0;
}