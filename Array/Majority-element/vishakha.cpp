#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={3,1,3,3,2};
    int ans=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]] > (n/2)){
            ans=arr[i];
            break;
        }
    }
    if(ans == 0){
      cout<<"-1";  
    }
    else{
        cout<<ans;
    }
}  
