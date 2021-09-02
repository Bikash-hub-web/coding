#include <bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
    int start =0;
    int end = n-1;
    int res =-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(mid>0 && mid <n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]> arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]<arr[mid-1]){
                end = mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
        }
        else{
            if(mid==0){
                if(arr[0]> arr[1]){
                    return arr[0];
                }
            }
            else if(mid == n-1){
                if(arr[n-1]>arr[n-2]){
                    return arr[n-1];
                }
            }
        }
    }
    return res ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = peak(arr,n);
    cout<<ans<<endl;


    return 0;
}