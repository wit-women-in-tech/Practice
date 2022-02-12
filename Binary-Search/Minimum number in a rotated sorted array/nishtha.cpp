int minNumber(int arr[], int low, int high)
    {
        int mn = arr[low];
        
        while (low <= high) {
            
            int mid = (low + high) / 2;
            
            mn = min(mn, arr[mid]);
            
            if (arr[mid] > arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        
        return mn;
        
    }