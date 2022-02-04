class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i = 0; i < n; i++){
    	    int rev = 0, num = a[i];
    	    while(num){
    	        int rem = num%10;
    	        rev = rev*10 + rem;
    	        num /= 10;
    	    }
    	    if(rev != a[i]) return 0;
    	}
    	
    	return 1;
    }
};
