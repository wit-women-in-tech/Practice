class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> uniqueEle;
	    for(int i=0;i<n;i++){
		uniqueEle.insert(a[i]);
	    }
	    for(int i=0;i<m;i++){
		uniqueEle.insert(b[i]);
	    }
	    return uniqueEle.size();
    }
};