// binary search in increasing order
#include <bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int ele){
    int start =0;
    int end = n-1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(ele==arr[mid]){
            return mid;
        }
        else if(ele<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
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
    int ans = bs(arr,n,k);
    cout<<ans+1<<endl;
    return 0;
}
