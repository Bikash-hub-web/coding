#include<bits/stdc++.h>
using namespace std;

int tree(int n,int m,int a[],int b[],vector<int> v[]){
    int ans=0;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++){
        int minValue=INT_MAX;
        int index=-1;
        for(int j=0;j<=n;j++){
            if(a[j]<minValue && vis[j]==0){
                minValue=a[j];
                index=j;
            }
        }
        if(index==-1 || m<a[index])break;
        vis[index]=1;
        m=m-a[index];
    }
    return ans;
}
int main(){
    int n,m;cin>>n>>m;
    vector<int> v[n+1];
    int a[n],b[n];
    for(int i=1;i<=n;i++){
        int parent;cin>>parent;
        v[parent].push_back(i);
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    tree(n,m,a,b,v);
    cout<<"Hello World!"<<endl;
    return 0;
}