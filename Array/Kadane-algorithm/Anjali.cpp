// The basic idea of Kadane Algorithm is we make the current sum 0 as soon as it becomes negative.
// This is because when we add negative sum it will definitely reduce total, so we leave the previous part and start sum fron zero.

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int max_sum = arr[0];
        int curr_sum = arr[0];
        for(int i = 1; i < n; i++){
            if(curr_sum < 0) curr_sum = 0;
            curr_sum += arr[i];
            max_sum = max(curr_sum, max_sum);
        }
        return max_sum;
    }
};
