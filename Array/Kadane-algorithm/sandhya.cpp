 long long maxSubarraySum(int arr[], int n){
        
    
        int sum=0;
        int max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            max_sum=max(max_sum,sum);
            if(sum<0)//no need to include negative sum in max_sum as it will always decrease the sum 
            {
                sum=0;
            }
           
        }
         return max_sum;
    }