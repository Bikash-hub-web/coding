#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    vector<int>v;
    for(int i=0;i<n;i++){
        if((arr[i] & arr[i+1]) * 2 < (arr[i] | arr[i+1])){
            v.push_back(arr[i]);
            if(v[i+1]!=arr[i+1])
            {
                v.push_back(arr[i+1]);
                
            }

        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
    return 0;
}