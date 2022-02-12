class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n=v.size();
        
        for(int i=0;i<n;i++)
        {
            int m=v[i].size();
           if(v[i][0]>t)break;
            if(v[i][m-1]<t)continue;
            int si=0,ei=m-1;
            while(si<=ei)
            {
                int mid=(si+ei)/2;
                if(v[i][mid]==t)return true;
                if(v[i][mid]<t)si=mid+1;
                else ei=mid-1;
            }
        }
        return false;
    }
};