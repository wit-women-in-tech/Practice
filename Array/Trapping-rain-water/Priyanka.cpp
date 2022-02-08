long long trappingWater(int arr[], int n){
        // code here
        long long water = 0;
        int a[n],b[n];
        int maxl = arr[0];
        int maxr = arr[n-1];
        
        for(int i=0;i<n;i++){
            maxl = max(maxl,arr[i]);
            a[i] = maxl;
        }
        
        for(int i=n-1;i>=0;i--){
            maxr = max(maxr,arr[i]);
            b[i] = maxr;
        }
        
        for(int i=0;i<n;i++){
            int height = min(a[i],b[i]);
            water += height - arr[i];
        }
        
        return water;
    }
