long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int curr_sum = 0;
        int max_sum = INT_MIN;
        int i=0;
        
        while(i<n){
            curr_sum = max(curr_sum+arr[i],arr[i]);
            max_sum = max(max_sum,curr_sum);
            i++;
        }
        return max_sum;
    }
