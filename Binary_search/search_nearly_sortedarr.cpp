// searching in nearly sorted array
#include<bits/stdc++.h>
using namespace std;

int search_nearly(int arr[],int n,int ele){
    int start = 0;int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            return mid;
        }
        if(ele == arr[mid-1] && start<=mid-1)
        {
            return mid-1;
        }
        if(ele == arr[mid+1] && end >= mid+1){
            return mid+1;
        }
        else if(ele<arr[mid]){
            end =mid-2;
        }
        else{
            start= mid+2;
        }
    }
    return -1;
}

int main(){
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = search_nearly(arr,n,k);
    cout<<ans<<endl;
    return 0;
}