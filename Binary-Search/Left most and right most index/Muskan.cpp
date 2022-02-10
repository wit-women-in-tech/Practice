class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long>p={-1,-1};
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                p.first=i;
               
                int j=i+1;
                while(v[j]==v[i]&&j<n)
                {
                    j++;
                }
                p.second=j-1;
                break;
            }
            
        }
        return p;
    }
};
