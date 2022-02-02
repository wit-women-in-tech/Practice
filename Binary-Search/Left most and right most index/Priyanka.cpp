pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long> pr;
        int n = v.size();
        int l = 0;
        int h = n-1;
        int first = -1;
        int last = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(v[mid] == x){
                first = mid;
                h = mid-1;
            }
            else if(v[mid] < x)
            l = mid+1;
            else if(v[mid] > x)
            h = mid - 1;
        }
            
            l = 0;
            h = n-1;
            while(l<=h){
            int mid = l + (h-l)/2;
            if(v[mid] == x){
                last = mid;
                l = mid+1;
            }
            else if(v[mid] < x)
            l = mid+1;
            else if(v[mid] > x)
            h = mid - 1;
        }
        pr = {first,last};
        return pr;
    }
