bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i=1;i<n;i++)arr[i]=arr[i]+arr[i-1];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)return true;
            mp[arr[i]]++;
            if(mp[arr[i]]>1)return true;
        }
        return false;
    }