class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //idea is to use hash set and prefix sum method
        unordered_set<int>s;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            
            pre_sum+=arr[i];
            
            if(s.find(pre_sum)!=s.end() || pre_sum==0)
            return true;
            
            s.insert(pre_sum);
            
        }
        
        return false;
    }
};
