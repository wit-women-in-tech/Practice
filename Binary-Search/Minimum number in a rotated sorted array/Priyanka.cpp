int minNumber(int arr[], int low, int high)
{
    // Your code here
    int n = high + 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int prev = (mid-1+n)%n;
        int next = (mid+1+n)%n;
        
        if(arr[mid] < arr[prev] && arr[mid] < arr[next])
        return arr[mid];
        else if(arr[mid] > arr[high])
        low = mid+1;
        else if(arr[mid] < arr[high])
        high = mid-1;
    }
}
