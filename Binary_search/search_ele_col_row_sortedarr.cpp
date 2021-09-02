//search element an coloumn and row wise and row wise sorted array

#include<bits/stdc++.h>
using namespace std;
pair<int,int> search_ele_row_col(int arr[][4],int n,int m,int ele){
    int i = 0;
    int j = m-1;
    pair<int,int>p(-1,-1);
    while(i>=0 && i<n && j>=0 && j<m){
        if(ele == arr[i][j]){
            p.first=i;
            p.second=j;
            return p;
        }
        else if(ele<arr[i][j]){
            j--;
        }
        else{
            i++;
        }

    }
    return p;

}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[4][4];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    pair<int,int>ans = search_ele_row_col(arr,n,m,k);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}