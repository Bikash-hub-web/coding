// find element in infinite sorted array
#include <bits/stdc++.h>
using namespace std;
int infinte_sortedarr(int arr[],int ele){
    int start = 0;
    int end =1;
    while(ele>arr[end]){
        start = end;
        end = 2 * end;
    }
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

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = infinte_sortedarr(arr,k);
    cout<<ans<<endl;
    return 0;
}