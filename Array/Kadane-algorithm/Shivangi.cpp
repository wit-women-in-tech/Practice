// TC: O(N)
// SC: O(1)

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long cs = 0;
    	long long largest = 0;
    	int maxelement = INT_MIN;
    
    	for(int i = 0; i < n; i++){
    		cs = cs + arr[i];
    		//If the addition of a[i] results in negative sum, 
    		if(cs < 0){
    			cs = 0;
    		}
    		largest = max(largest, cs);
    		
    		maxelement = max(maxelement, arr[i]); //needed in all-negative-numbers case
    	}
    	
    	if(maxelement < 0) //check for all negative numbers
    	return maxelement;
    	
    	return largest;
        
    }
};
