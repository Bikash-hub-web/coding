// Number of times a sorted array is rotated

#include <bits/stdc++.h>
using namespace std;

int num_rotated_sortarr(int arr[],int n){
    int start =0; int end = n-1;
    
   
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        int prev = (mid+n-1)%n;
        int next = (mid+1)%n;
        if(arr[prev]>=arr[mid] && arr[mid]<=arr[next]){
            return  mid;   // min ele index
        }
        else
        {
            if(arr[start]<=arr[mid] && arr[mid]<= arr[end]){
              return  start; //min ele index
            }
            else if(arr[start]<=arr[mid]){
            start = mid+1;
            cout<<"start in if "<<start<<endl;
            }
            else if(arr[mid]<=arr[end]){
            end = mid-1;
            cout<<"end in if "<<start<<endl;
             }

        }
       
      
    }
    
    
    return 0;

}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = num_rotated_sortarr(arr,n);
    cout<<"ans "<<ans<<endl;
    return 0;
}