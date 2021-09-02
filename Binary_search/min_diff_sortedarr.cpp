// minimum difference in sorted array

#include <bits/stdc++.h>
using namespace std;

int min_diff(int arr[],int n,int ele){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele == arr[mid]){
            return 0;
        }
        else if(ele<arr[mid]){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    int x = abs(arr[start]-ele);
    int y = abs(arr[end]-ele);
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = min_diff(arr,n,k);
    cout<<ans<<endl;
    return 0;
}