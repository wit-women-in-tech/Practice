class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // idea is consider two variable 1. sum and 2. maxSum (which will contain maximum sum of subarray)
        // according to kadane's algo if sum becomes negative assign zero value to sum
        // upadte maxSum is current sum is grater than previous maxSum
        int sum = 0, maxSum = INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum = 0;
            }
            sum+=arr[i];
            maxSum=max(sum,maxSum);
        }
        
        return maxSum;
    }
};
