#include <bits/stdc++.h>
using namespace std;

int min_cost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>mnhp;
    int cost =0;
    for(int i=0;i<n;i++){
        mnhp.push(arr[i]);
    }
    while(mnhp.size()>=2){
        int first = mnhp.top();
        mnhp.pop();
        int second = mnhp.top();
        mnhp.pop();
        cost = cost+first+second;
        mnhp.push(first+second);

    }
    return cost;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = min_cost(arr,n);
    cout<<ans<<endl;
    return 0;
}