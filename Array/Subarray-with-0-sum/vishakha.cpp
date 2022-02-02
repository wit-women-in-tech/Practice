#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int sum=0;
    int x,y;
    int arr[n]={4,2,3,1,6};
    int prefi[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
       prefi[i]=sum;
       if(mp.find(prefi[i]) != mp.end()){
        //   x=mp[prefi[i]]+1;
        //   y=i;
          cout<<"yes";
          break;
       }
       else{
           if(i == n-1){
               cout<<"no";
               break;
           }
         mp[prefi[i]]=i;  
       }
    }
    // for(int i=x;i<=y;i++){
    //     cout<<arr[i]<<" ";
    // }
}  
