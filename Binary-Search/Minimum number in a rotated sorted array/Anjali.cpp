class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        if(arr[low] < arr[high] || low == high) return arr[low];
        while(low < high){
            int mid = low +(high-low)/2;
            if(arr[mid] > arr[high])    low = mid+1;
            else    high = mid;
        }
        return arr[high];
    }
};
