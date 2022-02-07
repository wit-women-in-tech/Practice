////Function to check whether there is a subarray present with 0-sum or not.
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0 || s.find(sum)!=s.end())
            return true;
            
            s.insert(sum);
        }
        return false;
    }
