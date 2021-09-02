#include <bits/stdc++.h>
using namespace std;

// void swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
void swap(int a, int b){
    int t= a;
    a=b;
    b=t;
}
int partion(int* arr, int start,int end){
    int pivot = arr[end];
    int pindex= start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex],arr[end]);
    return pindex;
}

void quick_sort(int* arr,int start,int end){
    if(start<end){
    int  pi ;
    pi = partion(arr,start,end);
    quick_sort(arr,start,pi-1);
    quick_sort(arr,pi+1,end);
    }
   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}