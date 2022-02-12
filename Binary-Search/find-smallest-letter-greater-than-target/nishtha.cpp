 char nextGreatestLetter(vector<char>& v, char t) {
        char ans=v[0];
        int si=0,ei=v.size()-1;
        while(si<=ei)
        {
            int mid=(si+ei)/2;
            if(v[mid]<=t)si=mid+1;
            else 
            {
                ans=v[mid];
                ei=mid-1;
            }
        }
        
        return ans;
    }