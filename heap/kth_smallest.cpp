#include <bits/stdc++.h>
using namespace std;

int kth_smallest(int arr[],int n,int k){
    priority_queue<int> mxhp;
    for(int i=0;i<n;i++){
        mxhp.push(arr[i]);
        if(mxhp.size()>k){
            mxhp.pop();
           
        }

    }
    return mxhp.top();
    
}

int main(){
    int n,k; cin>>n>>k;
    int arr[n];
    for (
        int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = kth_smallest(arr,n,k);
    cout<<ans<<endl;
    return 0;
}