#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y,t;
    // scanf("%lld %lld",&x,&y);
    cin>>x>>y;
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
     }
    long long int i,maxp,minp;
    while(1)
    {
        if(x<0)
        t=-x;
        else
        t=x;
    for(i=2;i<=t/2;i++)
        {
        if(t%i==0)

         break;
        }
       
        if(i>t/2)
        {
        minp=x;
        break;
        }
        x++;
     
    }
    while(1)
    {
        if(y<0)
        t=-y;
        else
        t=y;
        for(i=2;i<=t/2;i++)
        {
            if(t%i==0)
            break;
        }
        if(i>t/2)
        {
        maxp=y;
        break;
        }
        y--;
    }
    // printf("%lld", maxp+minp);
    cout<<maxp+minp<<endl;
    return 0;
}