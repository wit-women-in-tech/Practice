int findMaximum(int arr[], int n) {
	    // code here
	    int si=0,ei=n-1;
	    while(si<=ei)
	    {
	        int mid=(si+ei)/2;
	        if(mid>0 && arr[mid]>arr[mid-1] && mid+1<n && arr[mid]>arr[mid+1])return arr[mid];
	        if(mid>0 && arr[mid]>arr[mid-1])
	        {
	            si=mid+1;
	        }
	        else ei=mid-1;
	    }
	    return arr[n-1];
	}