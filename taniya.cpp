#include <bits/stdc++.h>
using namespace std;

void solve(string s,int m,int n){
    int ans =0;
    int size = s.size();
    while(size!=0){
        if(size>=m || size>=n){
            size -=m;
        ans++;
        size -=n;
        ans++;
        }else{
            size = size + s.size();
        }
        
    }
    cout<<ans<<endl;

}

int main(){
    string s;
    int m,n;
    cin>>s;
    cin>>m>>n;
    solve(s,m,n);
    // int ans = solve(s,m,n);
    return 0;
}