#include <bits/stdc++.h>
using namespace std;
// vector<int> leftindex(int arr[],int n){
//     stack<pair<int,int>>s;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         if(s.size()==0){
//             v.push_back(-1);
//         }
//         else if(s.top().first<arr[i]){
//             v.push_back(s.top().second);
//         }
//         else if(s.size()>0 && s.top().first>arr[i]){
//             while(s.size()>0 & s.top().first>arr[i] ){
//                 s.pop();
//             }
//             if(s.size()==0){
//                 v.push_back(-1);
//             }
//             else{
//                 v.push_back(s.top().second);
//             }
//         }
//         s.push({arr[i],i});
//     }
//     for(int i=0;i<n;i++)
//     {
//         v[i]=i-v[i];
//     }
//     return v;

// }
// vector<int> rightindex(int arr[],int n){
//     stack<pair<int,int>>sr;
//     vector<int> r; int pseudoindex = n;
//     for(int i=n-1;i>=0;i--){
//         if(sr.size()==0){
//             r.push_back(pseudoindex);

//         }
//         else if(sr.top().first<arr[i]){
//             r.push_back(sr.top().second);
//         }
//         else if(sr.size()>0 && sr.top().first>arr[i]){
//             while(sr.size()>0 && sr.top().first>arr[i]){
//                 sr.pop();
//             }
//             if(sr.size()==0){
//                 r.push_back(pseudoindex);
//             }
//             else{
//                 r.push_back(sr.top().second);
//             }
//         }
//         sr.push({arr[i],i});
//     }
//     reverse(r.begin(),r.end());
//     for(int i=0;i<r.size();i++){
//         r[i]=i-r[i];
//     }
//     return r;
// }

void MAH(int arr[], int n){
    //left index (nsl)
    stack<pair<int,int>>sl;
    vector<int>l;
    for(int i=0;i<n;i++){
        if(sl.size()==0){
            l.push_back(-1);
        }
        else if(sl.top().first<arr[i]){
            l.push_back(sl.top().second);
        }
        else if(sl.size()>0 && sl.top().first>arr[i]){
            while(sl.size()>0 & sl.top().first>arr[i] ){
                sl.pop();
            }
            if(sl.size()==0){
                l.push_back(-1);
            }
            else{
                l.push_back(sl.top().second);
            }
        }
        sl.push({arr[i],i});
    }
    for(int i=0;i<n;i++)
    {
        l[i]=i-l[i];
    }
    for(int i=0;i<l.size();i++){
        cout<<l[i]<<" ";
    }

    // // right index (nsr)
    //  stack<pair<int,int>>sr;
    // vector<int> r; int pseudoindex = n;
    // for(int i=n-1;i>=0;i--){
    //     if(sr.size()==0){
    //         r.push_back(pseudoindex);

    //     }
    //     else if(sr.top().first<arr[i]){
    //         r.push_back(sr.top().second);
    //     }
    //     else if(sr.size()>0 && sr.top().first>arr[i]){
    //         while(sr.size()>0 && sr.top().first>arr[i]){
    //             sr.pop();
    //         }
    //         if(sr.size()==0){
    //             r.push_back(pseudoindex);
    //         }
    //         else{
    //             r.push_back(sr.top().second);
    //         }
    //     }
    //     sr.push({arr[i],i});
    // }
    // reverse(r.begin(),r.end());
    // for(int i=0;i<r.size();i++){
    //     r[i]=i-r[i];
    // }
    // // vector<int>l=leftindex(arr,n);
    // // for(int i=0;i<l.size();i++){
    // //     cout<<l[i]<<" ";
    // // }
    // // vector<int>r = rightindex(arr,n);
    // for(int i=0;i<l.size();i++){
    //     cout<<l[i]<<" ";
    //  }
    // int width[n];
    // int area[n];
    // for(int i=0;i<n;i++){
    //     width[i]=r[i]-l[i]-1;
        
    // }
    // for(int i=0;i<n;i++){
    //     area[i] = arr[i] * width[i];
    // }
    // int maxarea=area[0];
    // for(int i=1;i<n;i++){
    //     if(area[i]>maxarea){
    //         maxarea = area[i];
    //     }

    // }
    // cout<<maxarea<<endl;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     MAH(arr,n);
//    int ans = MAH(arr,n);
//    cout<<ans<<endl;
    
    return 0;
}