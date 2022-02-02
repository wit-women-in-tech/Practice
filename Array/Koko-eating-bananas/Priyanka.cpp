#include <bits/stdc++.h>
using namespace std;
bool isvalid(int arr[],int n,int mid,int h){
    int a = 0;
    for(int i=0;i<n;i++){
        if(arr[i] <= mid)
        a++;
        else{
            int b = arr[i]/mid;
            a = a + b;
            if(arr[i]%mid != 0)
            a++;
        }
    }
    if(a > h)
    return false;
    return true;
}
int koko_eating_banana(int arr[],int n,int h,int hours){
    int l = 1;
    int result = INT_MAX;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(isvalid(arr,n,mid,hours) == true){
            result = min(mid,result);
            h = mid - 1;
        }
        else{
            l = mid +1;
        }
    }
    return result;
}
int main() {
    int arr[] = {30,11,23,4,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int hours = 5;
    int sum = 0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    cout<<koko_eating_banana(arr,n,sum,hours);
	return 0;
}
