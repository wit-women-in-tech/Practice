pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long n=v.size();
        long long p=-1,q=-1;
        for(long long i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                if(p==-1)
                {
                    p=i;
                    q=i;
                }
                else
                q=i;
            }
        }
        return {p,q};
        
    }