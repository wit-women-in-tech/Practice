class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    int n = a[i];
    	    int temp = 0;
    	    while(n!=0){
    	        int rem = n%10;
    	        temp=temp*10+rem;
    	         n=n/10;
    	    }
    	    
    	    if(temp!=a[i])
    	        return 0;
    	}
    	
    	return 1;
    }
};
