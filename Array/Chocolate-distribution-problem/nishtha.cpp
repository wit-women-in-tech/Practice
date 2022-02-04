 long long findMinDiff(vector<long long> v, long long n, long long m){
    //code
    long long ans=INT_MAX;
    sort(v.begin(),v.end());
    long long p=0,q=m-1,c=0;
    while(q<n)
    {
        c=v[q]-v[p];
        ans=min(ans,c);
        p++;
        q++;
    }
    return ans;
    }   