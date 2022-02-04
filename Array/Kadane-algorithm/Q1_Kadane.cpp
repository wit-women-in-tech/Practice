#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
     
        int maxsum=INT_MIN;
        int count=0;
        int ans=INT_MIN;
        int current_sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans=max(ans,arr[i]);
                count++;
            }
            current_sum+=arr[i];
            if(current_sum<0){
                current_sum=0;
            }
            maxsum=max(maxsum,current_sum);
        }
        
        if(count==n)
            return ans;
        else
            return maxsum;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The maximum sum subarray is :"<<kadane(arr,n);
return 0;
}