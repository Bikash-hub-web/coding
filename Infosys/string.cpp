#include<bits/stdc++.h>
using namespace std;
int convertBtoD(string s){
    int mod=100000000+7;
    int n=0;
    int pow2=1;
    for(int i=s.length()-1;i>=0;i--){
        int val=int(s[i])-48;
        n=(n+(val*pow2)%mod)%mod;
        pow2=pow2*2;
    }
    return n;
}
int findNextZero(string s,int i,int j){
    for(int k=j-1;k>=i;k--){
        if(s[k]=='0')return k;
    }
    return -1;
}
int funString(string s,int cash,int A,int B){
    int flip=0;
    int swap=0;
    int n=s.length();
    int j=n;
    int loop=0;
    if(B<=A)
    for(int i=loop;i<n;i++){
        loop=i;
        if(cash>=B){
            if(s[i]=='1'){
                    cash-=B;
                    s[i]='0';   
                    flip++;
                }
        }
        else{
             break;
        }
    }
    for(int i=loop;i<n;i++){
        loop=i;
        if(cash>=A){
            if(s[i]=='1'){
                j=findNextZero(s,i+1,j);
                if(j==-1){
                    break;
                }
                cash-=A;
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                swap++;
            }
        }   
    }
    for(int i=loop;i<n;i++){
        if(s[i]=='1')
            if(cash>=B){
                cash-=B;
                s[i]='0';   
            }
            else break;
    }
    cout<<s<<" "<<flip<<" "<<swap<<endl;
    int ans=convertBtoD(s);
    return ans;
}
int main()
{
    string s="101011";
    int cash=10;
    int a=1,b=3;
    cout<<funString(s,cash,1,3)<<endl;
    return 0;
}