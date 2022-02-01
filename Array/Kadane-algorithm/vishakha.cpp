#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n] ={-1,-2,-3,-4};
    int cmax=0,cmin=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cmax=cmax+arr[i];
        if(cmax > max){
           max = cmax;
        }
        if(cmax < 0){
           cmax=0; 
        }
    }
    cout<<max;
}   
