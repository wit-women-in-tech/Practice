class Solution {
public:
    vector<int> twoSum(vector<int>&v, int t) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(mp.count(t-v[i]))
            {
                 ans.push_back(mp[t-v[i]]+1);
                ans.push_back(i+1);
                return ans;
            }
            mp[v[i]]=i;
        }
        return ans;
    }
    
};