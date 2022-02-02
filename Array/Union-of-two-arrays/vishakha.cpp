#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        // if(mp[arr1[i]] < 1){
        //   mp[arr1[i]]++;
        // }
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        // if(mp[arr2[i]] < 1){
        //   mp[arr2[i]]++;  
        // }
    }
    // cout<<mp.size();
    
    //2nd approach
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    cout<<s.size();
}   
