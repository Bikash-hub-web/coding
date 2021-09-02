#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c,flag=0;
    cout<<a<<" "<<b<<" ";
    for(int i =1;i<n;i++){
        c = a+b;
        a = b;
        b = c;
        if(n==c){
            flag=1;
            break;
        }
        cout<<c<<" ";
    }
    if(flag){
        cout<<"yes it is !"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}