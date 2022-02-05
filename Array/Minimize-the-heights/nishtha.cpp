int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int mx,mn;
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
                mx=max(arr[i-1]+k,arr[n-1]-k);
                mn=min(arr[0]+k,arr[i]-k);
                ans=min(ans,mx-mn);
            }
        }
        return ans;