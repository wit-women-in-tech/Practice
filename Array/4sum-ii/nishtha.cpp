int fourSumCount(vector<int>& v1, vector<int>& v2, vector<int>& v3, vector<int>& v4) {
        map<int,int>mp;
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                mp[v1[i]+v2[j]]++;
            }
        }
        int c=0;
        for(int i=0;i<v3.size();i++)
        {
            for(int j=0;j<v4.size();j++)
            {
                if(mp[-(v3[i]+v4[j])]>0)
                {
                    c+=mp[-(v3[i]+v4[j])];
                }
            }
        }
        return c;
    }
