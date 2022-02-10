class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int x=arr[n-1];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            x=arr[i];
	            break;
	        }
	    }
	    return x;
	}
};
