class Solution {
public:
    int check_reverse(int n){
        string t = to_string(n);
        int i=0;
        int j=t.length()-1;
        while(i<j){
            if(t[i]!=t[j])
            return 0;
            i++;
            j--;
        }
        return 1;
    }
    
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	   
    	   if(check_reverse(a[i]) == 1)
    	   continue;
    	   else if(check_reverse(a[i] == 0))
    	   return 0;
    	}
    	return 1;
    }
};
