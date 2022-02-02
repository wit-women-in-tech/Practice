#include <bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[],int n)
{   
    int max_sum=INT_MIN;
    int end_sum = 0;
    for (int i = 0; i < n; i++)
    {
       end_sum =end_sum+arr[i];
       if(end_sum>max_sum)
       {
           max_sum=end_sum;
       }
       if(end_sum<0)
       {
           end_sum = 0;
       }
    }
    return max_sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<max_sum_subarray(arr,n);
    
    return 0;
}