class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int s = 0;
	    int e = n-1;
	    while(s < e){
	        int mid = s + (e - s)/2;
	        if(arr[mid] < arr[e]){
	            s = mid+1;
	        }
	        else{
	            if(mid){
	                if(arr[mid] >= arr[mid-1]){
	                    if(mid < n && arr[mid] > arr[mid+1])    return arr[mid];
	                    s = mid;
	                }
	                else{
	                    e = mid-1;
	                }
	            } 
	            else{
	                if(arr[mid] > arr[mid+1])
	                    e = mid;
	                else
	                    s = mid+1;
	            }
	        }
	    }
	    return arr[e];
	}
};
