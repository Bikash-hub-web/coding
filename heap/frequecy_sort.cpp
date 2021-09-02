#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n, int k){
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>mxhp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        mxhp.push({i->second,i->first});
    }
    
    while(mxhp.size()>0){
        for(int i=0;i<mxhp.top().first;i++){
            cout<<mxhp.top().second<<" ";
        }
        mxhp.pop();
    }


}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n,k);
    return 0;
}