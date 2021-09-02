#include <bits/stdc++.h>
using namespace std;
int ceil(int arr[],int n,int ele){
    int start =0;
    int end = n-1;
    int res =0;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(ele == arr[mid]){
            return arr[mid];
        }
        else if(ele<arr[mid]){
            res = arr[mid];
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return res;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = ceil(arr,n,k);
    cout<<ans<<endl;

    return 0;
}