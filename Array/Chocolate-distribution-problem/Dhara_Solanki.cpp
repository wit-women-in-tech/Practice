class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
      sort(a.begin(),a.end());
      
    long int diff, e=m-1,s=0,res=(a[m-1]-a[0]);
    while(e < n)
    {
        diff=a[e] - a[s];
        res=min(res, diff);
        s++;
        e++;
    }
    return res;
    }   
};
