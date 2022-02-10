class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int ans=0;
        int n=v.size();
        queue<int>q;
        for(int i=0;i<n;i++)q.push(i);
        while(v[k]>0)
        {
            int p=q.front();
            q.pop();
            v[p]--;
            if(v[p]>0)q.push(p);
            ans++;
        }
        return ans;
    }
};