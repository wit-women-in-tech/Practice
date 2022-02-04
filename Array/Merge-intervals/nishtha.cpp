 vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        int n=v.size();
        
        for(int i=0;i<n;i++)
        {
           int a=v[i][0];
            int b=v[i][1];
            while(i+1<n&& b>=v[i+1][0])
            {
                b=max(b,v[i+1][1]);
                i++;
            }
            vector<int>s;
            s.push_back(a);
            s.push_back(b);
            ans.push_back(s);
        }
        return ans;
    }