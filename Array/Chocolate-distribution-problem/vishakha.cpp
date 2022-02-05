#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int arr[n]={3, 4, 1, 9, 56, 7, 9, 12};
    int m;
    cin>>m;
    sort(arr,arr+n);
    int ans=arr[m-1]-arr[0];
    for(int k=m;k<n;k++){
        ans=min(ans,arr[k]-arr[k-m+1]);
    }
    cout<<ans;
}  
