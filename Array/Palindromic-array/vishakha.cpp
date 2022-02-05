#include<bits/stdc++.h>
using namespace std;

int palli(int a){
    int rev=0,x=a;
    while(a != 0){
        rev=rev*10+a%10;
        a=a/10;
    }
    if(rev == x){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(palli(arr[i]) == 1){
                count++;
            }
        }
        if(count == n){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        cout<<endl;
    }
}  
