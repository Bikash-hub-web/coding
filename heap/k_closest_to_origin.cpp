#include <bits/stdc++.h>
using namespace std;
#define ppi pair<int,pair<int,int>>

void k_closest_to_origin(int arr[][2],int n,int k){
    priority_queue<ppi>mxhp;
    for(int i=0;i<n;i++){
        int dis = arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1];
        mxhp.push({dis,{arr[i][0],arr[i][1]}});
        if(mxhp.size()>k){
            mxhp.pop();
        }
    }
    while(mxhp.size()>0){
        int f = mxhp.top().second.first;
        int s = mxhp.top().second.second;
        cout<<"("<<f<<","<<s<<")"<<endl;
        mxhp.pop();

    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n][2];
    for(int i=0;i<n;i++){
       for(int j=0;j<2;j++){
            cin>>arr[i][j];
       }
    }
    k_closest_to_origin(arr,n,k);
    return 0;
}