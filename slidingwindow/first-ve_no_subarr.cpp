#include <bits/stdc++.h>
using  namespace std;

void first_ve_subarr(int arr[],int n,int k){
    int i=0,j=0;
    list<int>l;
    vector<int>v;
    while(j<n){
        if(arr[j]<0){
            l.push_back(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1 == k){
            if(l.size()==0){
                v.push_back(0);
            }
            else{
                v.push_back(l.front());
                if(arr[i]== l.front()){
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    first_ve_subarr(arr,n,k);
    return 0;
}