// Number of times a sorted array is rotated

#include <bits/stdc++.h>
using namespace std;

int min_index(int arr[],int n){
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
            // cout<<"start in if "<<start<<endl;
            }
            else if(arr[mid]<=arr[end]){
            end = mid-1;
            // cout<<"end in if "<<start<<endl;
             }

        }
       
      
    }
    
    
    return 0;

}

int bs(int arr[], int start, int end, int ele){
    while(start<=end){
        int mid = start +(end-start)/2;
        if(ele == arr[mid]){
            return mid;
        }
        else if(ele <arr[mid]){
            end = mid-1;
        }else{
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
    int min = min_index(arr,n);
    int x = bs(arr,0,min-1,k);
    int y = bs(arr,min,n-1,k);
    if(x>y ){
        cout<<"found at "<<x<<endl;
    }
    else if(x==-1 && y == -1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"found at "<<y<<endl;
    }
    // cout<<" x "<<x<<endl;
    // cout<<"y "<<y<<endl;
    
    cout<<"min "<<min<<endl;
    return 0;
}