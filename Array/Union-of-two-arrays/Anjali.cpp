class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
      // sorting both arrays
        sort(a, a+n);     
        sort(b, b+m);
        int ans = 0;
        int i = 0, j = 0;
        while(i < n && j < m){
            while(i < n-1 && a[i] == a[i+1])    i++;  // eliminating repetition of elements
            while(j < m-1 && b[j] == b[j+1])    j++;
            
            if(a[i] == b[j]){
                i++, j++; 
            }
            else if(a[i] < b[j]){
                i++;
            }
            else{
                j++;
            }
            ans++;
        }
        
        while(i < n){
            while(i < n-1 && a[i] == a[i+1])    i++;
            ans++, i++;
        }
        
        while(j < m){
            while(j < m-1 && b[j] == b[j+1])    j++;
            ans++, j++;
        }
        
        return ans;
    }
};
