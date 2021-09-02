// count an element in sorted arrary in log n 
#include <bits/stdc++.h>
using namespace std;

int first_last_occ(int arr[],int n,int ele){
    int start =0;int end=n-1;
    int first = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele == arr[mid]){
            first = mid;
            end = mid-1;
        }
        else if(ele <arr[mid]){
            end = mid-1;
        }
        else{
            start= mid+1;
        }
    }
    
     return first;
}
int last_occ(int arr[],int n,int ele){
    int start=0; int end = n-1;
    int last =-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            last = mid;
            start = mid+1;
        }
        else if(ele <arr[mid]){
            end = mid-1;
        }
        else{
            start= mid+1;
        }
        
    }
    
    return last;
    
  
}

int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = last_occ(arr,n,k)-first_last_occ(arr,n,k);
    cout<<ans+1<<endl;
    return 0;
}