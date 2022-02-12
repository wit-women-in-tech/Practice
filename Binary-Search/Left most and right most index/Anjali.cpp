
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long n = v.size();
        pair<long,long> ans;
        long long s = 0, e = n-1;
        
        // finding starting index
        while(s < e){
            long long mid = s + (e-s)/2;
            if(v[mid] < x)    s = mid+1;
            else    e = mid;
        }
      // checking whether element is present or not.
        if(v[e] == x)
            ans.first = e;
        else
            return {-1,-1}; 
        
        // finding last index
        s = 0, e = n-1;
        
        while(s < e){
            long long mid = s + (e-s)/2;
            if(v[mid] > x)    e = mid-1;
            else{
                if(v[mid] == x && v[mid] < v[mid+1]){
                    e = mid;
                    break;
                }
                s = mid+1;
            }       
        }
        ans.second = e;
        return ans;
    }
};
