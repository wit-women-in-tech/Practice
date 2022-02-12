class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size();
        int si=0;
        if(n==1) return 0;
        if(n==2)
        {
            if(v[0]>v[1]) return 0;
            return 1;
        }
        int ei=n-1;
        int i=0;
        while(si<=ei)
        {
            int mid=(si+ei)/2;
            if(mid==0 && v[mid]>v[1]) return 0;
            else if(mid==0)return 1;
            if(mid==n-1 && v[n-1]>v[n-2]) return mid;
            else if(mid==n-1)return n-2;
            if(mid>0 && v[mid]>v[mid-1] && mid<n-1 && v[mid]>v[mid+1]) return mid;
            if(mid>0 && v[mid]>v[mid-1]) si=mid+1;
            else ei=mid-1;
            
        }
        return 0;
    }
};