#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n]={1, 5, 8, 10};
    int k;
    cin>>k;
    int cmax,cmin;
    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0]-2*k;
    for(int i =1;i<n;i++){
           if(arr[i]>=k){
            cmax = max(arr[n-1]-k,arr[i-1]+k);
            cmin = min(arr[i]-k,arr[0]+k);
            diff = min(diff,cmax-cmin);
           }
        }
    cout<<diff;
}   
