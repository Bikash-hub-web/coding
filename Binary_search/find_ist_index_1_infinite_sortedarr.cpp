// find first index of 1 in binary infinite sorted array
#include <bits/stdc++.h>
using namespace std;

int first_ind_binary(int arr[],int ele){
    int start =0;
    int end = 1;
    int res =-1;
    while(ele>arr[end]){
        start = end ;
        end = 2 * end;
    }
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele == arr[mid]){
            res = mid;
            end = mid-1;
        }
        else if(ele<arr[mid]){
            end = mid -1;
        }
        else{
            start= mid+1;
        }
    }
    return res;


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = first_ind_binary(arr,1);
    cout<<ans<<endl;
}