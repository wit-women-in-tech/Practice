#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={3,0,0,2,0,4};
    int sum=0;
    stack<int>st;
    int i=1;
    while(i<n){
      st.push(arr[0]);
      if(arr[i]<st.top()){
          sum=sum+st.top()-arr[i];
      }
      else{
          st.pop();
          st.push(arr[i]);
      }
      i++;
    }
    cout<<sum;
}  
