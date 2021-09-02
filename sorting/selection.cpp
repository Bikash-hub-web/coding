// #include <bits/stdc++.h>
// using namespace std;
// void swap(int a,int b){
//     int t = a;
//     a=b;
//     b=t;
// }

// int minindex(int arr[],int n,int mn){
//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[mn]){
//             mn =i;
//         }
//     }
//     cout<<mn;
//     return mn;
// }

// void selection_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int mn = i;
//         int min = minindex(arr,n,mn);
//         swap(arr[i],arr[min]);
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selection_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mn = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[mn]){
                mn = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[mn];
        arr[mn] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}