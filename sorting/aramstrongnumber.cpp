#include <bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int r;
    int sum =0;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n= n/10;
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    int temp = n;
    int sum = armstrong(n);
    if(sum==temp){
        cout<<"armastrong number !";
    }
    else{
        cout<<"Not an armstrong number";
    }
    return 0;

}