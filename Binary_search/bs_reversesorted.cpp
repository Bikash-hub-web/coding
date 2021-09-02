#include <bits/stdc++.h>
using namespace std;

int bs_reversesorted(int arr[],int n,int ele){
    int start =0; int end = n-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(ele == arr[mid]){
            return mid;
        }
        else if(ele<arr[mid])
        {
            start = mid+1;

        }
        else{
            end = mid-1;
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
    int ans = bs_reversesorted(arr,n,k);
    cout<<"at index " << ans<<endl;
    return 0;
}