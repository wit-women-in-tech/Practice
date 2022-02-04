// Using prefix sum and hashmap.
// The idea is if any subarray has sum = 0, then sum of elements before starting of subarray will be equal to sum of elements at the end of subarray.
// To find whether the sum is same as that we have find earlier, used hashmap.

class Solution{
    public:
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(!sum || mp[sum]) return true;
            mp[sum]++;
        }
        return false;
    }
};
