// search an element in bitonic arrary
#include <bits/stdc++.h>
using namespace std;
int peakindex(int arr[], int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>=arr[mid-1] && arr[mid]>= arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1]){
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }
        else{
            if(mid==0 && arr[0]>arr[1]){
                return 0;
            }
            else if(mid==n-1 && arr[n-1]>arr[n-2]){
                return n-1;
            }
        }
    }
    return -1;

}
int bs(int arr[],int start, int end ,int ele){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele == arr[mid]){
            return mid;
        }
        else if(ele<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }
    return -1;
}

int bsrev(int arr[],int start,int end,int ele){
    while(start<=end){
        int mid = start+(end-start)/2;
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
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pi = peakindex(arr,n);

    int x = bs(arr,0,pi-1,k);
    int y = bsrev(arr,pi,n-1,k);
    if(x>y){
        cout<<" Found "<<x<<endl;
    }
    else if(x == -1 && y ==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"found "<<y<<endl;
    }
    // cout<<ans<<endl;
}