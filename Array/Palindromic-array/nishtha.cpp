int PalinArray(int a[], int m)
    {
    	// code here
    	for(int k=0;k<m;k++)
    	{
    	    string p=to_string(a[k]);
    	    int n=p.size();
    	int i=0,j=n-1;
    	while(i<j)
    	{
    	    if(p[i]!=p[j])return 0;
    	    i++;
    	    j--;
    	}
    	}
    	return 1;
    }