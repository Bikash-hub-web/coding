#include <bits/stdc++.h>
using namespace std;

int kth_smallest(int arr[],int n,int k){
    priority_queue<int>mxhp;
    for(int i=0;i<n;i++){
        mxhp.push(arr[i]);
        if(mxhp.size()>k){
            mxhp.pop();
        }
    }
    return mxhp.top();
}
int main(){
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    int first =kth_smallest(arr,n,k1);
    int second = kth_smallest(arr,n,k2);
    for(int i=0;i<n;i++){
        if(arr[i]>first && arr[i]<second){
            sum = sum +arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;

}