// Time Complexity: O(nlogn)
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        long long ans = a[m-1]-a[0];
        for(long long i = m; i < n; i++){
            ans = min(ans, a[i]-a[i-m+1]);
        }
        return ans;
    }   
};
