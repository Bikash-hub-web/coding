
#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

void top_k_ele(int arr[],int n,int k){
    unordered_map<int,int>mp;
    priority_queue<pp,vector<pp>,greater<pp>>mnhp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        mnhp.push({i->second,i->first});
        if(mnhp.size()>k){
            mnhp.pop();
        }
    }
    while(mnhp.size()>0){
        cout<<mnhp.top().second<<" ";
        mnhp.pop();
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    top_k_ele( arr, n, k);
    return 0;
}