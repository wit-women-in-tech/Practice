class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int l = 0;
	    int h = n-1;
	    while(l<=h){
	        int mid = l + (h-l)/2;
	        if((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid-1]))
	        return arr[mid];
	        else if(arr[mid] < arr[mid-1])
	        h = mid -1;
	        else if(arr[mid] < arr[mid+1])
	        l = mid + 1;
	    }
	}
};
