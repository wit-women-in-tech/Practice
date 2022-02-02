#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int sum=0;
    int x,y;
    int arr[n]={4,2,0,1,6};
    map<int,int>mp;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
       if(mp.find(sum) != mp.end()){
        //   x=mp[sum]+1;
        //   y=i;
          cout<<"yes";
          break;
       }
       else{
           if(i == n-1){
               cout<<"no";
               break;
           }
         mp[sum]=i;  
       }
    }
    // for(int i=x;i<=y;i++){
    //     cout<<arr[i]<<" ";
    // }
}   
