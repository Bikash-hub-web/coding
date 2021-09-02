// return maximium element in bitonic array
#include <bits/stdc++.h>
using namespace std;
int max_ele_bitonic(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]<arr[mid-1]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(mid==0 && arr[0]>arr[1]){
                return arr[0];
            }
            else if(mid == n-1 && arr[n-1]>arr[n-2]){
                return arr[n-1];
            }
        }
    }
    return -1;

}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = max_ele_bitonic(arr,n);
    cout<<ans<<endl;
    return 0;
}