#include<bits/stdc++.h>
using namespace std;

int feasible(int mid){
    int count=0,n=4,H=8;
    int piles[n]={3,6,7,11};
    for(int i=0;i<n;i++){
        if((piles[i]%mid) != 0){
            count++;
        }
        count=count+(piles[i]/mid);
    }
    if(count <= H){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n=4,H=8;
    int min=INT_MAX;
    int max=INT_MIN;
    int piles[n]={3,6,7,11};
    for(int i=0;i<n;i++){
        if(piles[i] < min){
            min=piles[i];
        }
        if(piles[i] > max){
            max=piles[i];
        }
    }
    int l=min,h=max;
    int mid=l+(h-l)/2;
    while(l<h){
        int mid=l+(h-l)/2;
        if(feasible(mid) == 1){
            h=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<h;
}   
