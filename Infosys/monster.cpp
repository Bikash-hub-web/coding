#include <bits/stdc++.h>
using namespace std;

int solve(int p[],int b[],int e,int n){
    int count =0;
   vector<pair<int,int>>v;
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   for(int i=0;i<n;i++){
       pq.push(make_pair(p[i],b[i]));
   }
    auto it = pq.top();
    int start = it.first;
    int end = it.second;
    pq.pop();
    v.push_back(make_pair(start,end));
    while(!pq.empty()){
        auto itr = pq.top();
        pq.pop();
        
        start = itr.first;
        end = itr.second;
        v.push_back(make_pair(start,end));
    
    }
   
    for(int i=0;i<v.size();i++){
        if(e>=v[i].first){
            count++;
            e = e + v[i].second;
            
        }
    }
    
    return count;
}

int main(){
    int n,e;
    cin>>n>>e;
    int p[n],b[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int ans = solve(p,b,e,n);
    cout<<ans<<endl;
   

    return 0;
}