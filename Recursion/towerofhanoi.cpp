#include <bits/stdc++.h>
using namespace std;

void solve(int s,int d,int h,int n,int *count){
    count++;
    if(n==1){
        cout<<1<<" plates "<<s<<" to "<<d<<endl;
        return ;
    }
    solve(s,h,d,n-1,count);
    cout<<n<<" plates "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1,count);
    
    return;
}
int main(){
    int n;
    cin>>n;
    int s =1, h=2,d=3;
    int count=0;
    solve(s,d,h,n,&count);
    cout<<count<<endl;
    return 0;
}