// first and last occuerence in sorted array
#include <bits/stdc++.h>
using namespace std;

int first_occele_sortedarr(int arr[],int n,int ele){
    int start =0;int end = n-1;
    int res =-1;
    //first occurence
    while(start<=end){
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            res=mid;
            end = mid-1;
        }
        else if(ele<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int last_occele_sortedarr(int arr[],int n,int ele){
    int start =0;int end = n-1;
    int res =-1;
    //lsat occurence
    while(start<=end){
        int mid = start+(end-start)/2;
        if(ele == arr[mid]){
            res=mid;
            start = mid+1;
        }
        else if(ele<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int>ans;
    ans.first = first_occele_sortedarr(arr,n,k);
    ans.second = last_occele_sortedarr(arr,n,k);
    if(ans.first==ans.second){
        cout<<"At index "<<ans.first<<endl;
    }else{
        cout<<"At First "<<ans.first<<endl;
        cout<<"At Last "<<ans.second<<endl;
    }
    return 0;
}