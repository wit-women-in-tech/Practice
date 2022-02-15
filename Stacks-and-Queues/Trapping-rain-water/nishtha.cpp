 int trap(vector<int>& v) {
        int n=v.size();
        int a[n],b[n];
        a[0]=0;
        b[n-1]=0;
        for(int i=1;i<n;i++)
        {
            a[i]=max(a[i-1],v[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            b[i]=max(b[i+1],v[i+1]);
        }
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            if(min(a[i],b[i])-v[i]>0)
            ans+=(min(a[i],b[i])-v[i]);
        }
        return ans;
    }