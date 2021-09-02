#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>mnhp;
    vector<int>v;
    
    for(int i=0 ;i<n; i++){
        mnhp.push(arr[i]);
        if(mnhp.size()>k){
            v.push_back(mnhp.top());
            
            mnhp.pop();
        }
    }
    // for(int i=0;i<=mnhp.size();i++){
    //     v.push_back(mnhp.top());
    //          mnhp.pop();
    // }
    while(mnhp.size()!=0){
        v.push_back(mnhp.top());
             mnhp.pop();
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"size of vector "<<v.size()<<endl;
    cout<<endl<<"mnhp top "<<mnhp.top()<<endl;

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