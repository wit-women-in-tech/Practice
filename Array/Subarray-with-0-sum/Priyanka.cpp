 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum = 0;
        set <int > s;
        
        for(int i=0;i<n;i++){
        if(arr[i] == 0)
        return true;
        
        sum+=arr[i];
        
        if(sum == 0)
        return true;
        
        if(s.find(sum) != s.end())
        return true;
        s.insert(sum);
        }
    return false;
    }
