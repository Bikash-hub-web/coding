// allocation of minmum no of pages
#include <bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],int n,int k,int max){
    int student =1;
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        if(sum>max){
            student ++;
            sum = arr[i];
        }
        if(student>k){
            return false;
        }
    }
    return true;
}

int min_page(int arr[],int n,int k,int start,int end){
    int res =-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isvalid(arr,n,k,mid)==true){
            res = mid;
            end = mid-1;
        }
        else{
            start= mid+1;
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
    int mx = INT_MIN;
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        sum=sum+arr[i];
    }
    
    int ans = min_page(arr,n,k,mx,sum);
    cout<<ans<<endl;
    return 0;
}