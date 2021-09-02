#include <bits/stdc++.h>
using namespace std;

int maxsum_subarr(int arr[],int n,int k){
    int i=0,j=0;
    int sum =0;
    int mx = INT_MIN;
    while(j<n){
        sum = sum +arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1 ==k){
            mx = max(mx,sum);
            sum = sum-arr[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
    return mx;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = maxsum_subarr(arr,n,k);
    cout<<ans<<endl;
    return 0;
}