int majorityElement(int a[], int n)
    {
        sort(a,a+n);
        int ans=-1;
        // if(n%2==0)
        // {
        for(int i=0;i<(n+1)/2;i++)
        {
             ans=a[i];
            if(a[i+n/2]!=a[i])ans=-1;
            else break;
        }
        
        //  if(n%2!=0)
        // {
        // for(int i=0;i<=n/2;i++)
        // {
        //      ans=a[i];
        //     if(a[i+n/2]!=a[i])ans=-1;
        //     else break;
        // }
        // }
        return ans;
    }