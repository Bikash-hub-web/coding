// order not known in sorted arr
#include <bits/stdc++.h>
using namespace std;

int ord_notknown_sorted(int arr[],int n,int ele){
    int start =0; int end = n-1;
    if(arr[0]<arr[1]){ //increasing order sorted arr
        while(start<=end){
            int mid = start+(end-start)/2;
            if(ele==arr[mid]){
                return mid;
            }
            else if(ele<arr[mid]){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
           
        }

    }
    else{  // decresing sorted array
        while(start<=end){
            int mid = start + (end-start)/2;
            if(ele == arr[mid]){
                return mid;
            }
            else if(ele<arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }

    }
    return -1;
}

int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = ord_notknown_sorted(arr,n,k);
    cout<<ans<<endl;
    return 0;
}