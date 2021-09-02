#include <bits/stdc++.h>
using namespace std;
char alphabetical_next(char arr[],int n,char ele){
    int start =0;
    int end = n-1;
    char res = '@';
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele == arr[mid]){
            start = mid +1;
        }
        else if(ele<arr[mid]){
            res = arr[mid];
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;

}

int main(){
    int n;
    cin>>n;
    char k;
    cin>>k;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char ans = alphabetical_next(arr,n,k);
    cout<<ans<<endl;
    return 0;
}