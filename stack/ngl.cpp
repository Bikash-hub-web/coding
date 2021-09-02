//Nearest greater to left
#include <bits/stdc++.h>

using namespace std;
void ngl(int arr[],int n){
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<arr[i]){
            while(s.size()>0 && s.top()<arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ngl(arr,n);
    return 0;
}