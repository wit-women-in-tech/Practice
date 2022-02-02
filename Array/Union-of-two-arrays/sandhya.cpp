int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int ab[n+m];
        for(int i=0;i<n;i++)
        {
            ab[i]=a[i];
        }
        for(int i=n;i<n+m;i++)
        {
            ab[i]=b[i-n];
        }
        
        sort(ab,ab+m+n);
        int count=0;
        for(int i=0;i<n+m;i++)
        {
            count++;
            while(i<n+m-1&&ab[i]==ab[i+1])
            {
            i++;
            }
        }
        return count;
    }