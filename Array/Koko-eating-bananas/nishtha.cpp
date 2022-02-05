bool helper(vector<int> v, int h,int mid)
    {
        int n=v.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=((v[i]+mid-1)/mid);
        }
        if(c<=h)return true;
        return false;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        int mx=1000000000;
        int mn=1;
        int mid=(mx+mn)/2;
        while(mn<=mx)
        {
            mid=(mx+mn)/2;
            if(helper(v,h,mid))
            {
                mx=mid-1;
            }
            else 
            {
                mn=mid+1;
            }
        }
        return mn;
    }