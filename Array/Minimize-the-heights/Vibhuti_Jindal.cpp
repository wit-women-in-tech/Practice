 
int getMinDiff(int arr[], int n, int k) 
    {
       sort(arr, arr+n);
       int diff = arr[n-1] - arr[0];
       int mx = arr[n-1];
       int mn = arr[0];
       
       for(int i = 0; i < n-1; i++)
       {
           if(arr[i+1] - k < 0)
              continue;
         
           mn = min(arr[0] + k, arr[i+1] - k);
          
           mx = max(arr[i] + k, arr[n-1] - k);
           
           diff = min(diff, mx - mn);  
       }
   
     return diff;
    }
