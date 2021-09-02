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

int fun2(string s,int cash,int A,int B){
    int swap=0;
    int flip=0;
    int n=s.length();
    int count=0;
    int totalFlip=cash/B;
    int index=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && count<totalFlip){
            cash-=B;
            index=i;
            count++;
            flip++;
        } 
    }
    s=s.substr(index+1);
    int j=s.length();
    n=j;
    cout<<j<<endl;
    for(int i=0;i<n;i++){
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
    
    int ans2=convertBtoD(s);
    cout<<s<<endl;
    cout<<"Fun2: swap="<<swap<<" Flip="<<flip<<" Cash="<<cash<<endl;
    return ans2;

}
int funString(string s,int cash,int A,int B){
    int ans2=fun2(s,cash,A,B);
    int flip=0;
    int swap=0;
    int n=s.length();
    int j=n;
    int loop=0;
    // cout<<s.substr(index+1)<<endl;
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
                flip++;  
            }
            else break;
    }
    cout<<s<<endl;
    cout<<"Fun1: swap="<<swap<<" Flip="<<flip<<" Cash="<<cash<<endl;
    int ans=convertBtoD(s);
    return min(ans,ans2);
}
int main()
{
    string s="011101110";
    int cash=13;
    int a=4,b=10;
    cout<<s<<endl;
    cout<<funString(s,cash,a,b)<<endl;
    return 0;
}