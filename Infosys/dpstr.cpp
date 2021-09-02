#include<bits/stdc++.h>
using namespace std;
int lastIndex;
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
    for(int k=lastIndex-1;k>i;k--){
        lastIndex=k;
        if(s[k]=='0')return k;
    }
    return -1;
}
int dp[100000][10000];
int funString(int i,int N,string s,int cash,int A,int B){
    if(i==N)return 0;
    if(dp[i][cash]!=-1)return dp[i][cash];
    for(int j=i;j<N;j++){
        if(s[j]=='1'){
            i=j;
            break;
        }
    }
    int ans1=0,ans2=0;
    string s1,s2;
    if(cash<=A){
        s[i]='0';
        s1=s;
        ans1=funString(i+1,N,s1,cash-A,A,B);
        s[i]='1';
    }
    if(cash<=B){
        int j=findNextZero(s,i+1,N);
        s[i]='0';
        s[j]='1';
        s2=s;
        ans1=funString(i+1,N,s2,cash-A,A,B);
        s[i]='1';
        s[j]=0;
    }
    dp[i][cash]=min(ans1,ans2);
    return dp[i][cash];
}
int main()
{
    string s="101011";
    int cash=10;
    int a=1,b=3;
    memset(dp,-1,sizeof(dp));
    lastIndex=s.length();
    cout<<funString(0,s.length(),s,cash,a,b)<<endl;
    return 0;
}