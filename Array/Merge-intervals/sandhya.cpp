bool compare(const pair<int,char>&a,const pair<int,char>&b)
    {
        if(a.first<b.first)
        {
            return true;
        }
        else if(a.first==b.first)
        {
            return (a.second=='S');
        }
        return false;
    }
class Solution {
public:
   // bool compare(const pair<int,char>,const pair<int,char>);
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>result;
        vector<pair<int,char>>v;
        for(int i=0;i<n;i++)
        {
           v.push_back(make_pair(intervals[i][0],'S'));
           v.push_back(make_pair(intervals[i][1],'E'));
        }
        sort(v.begin(), v.end(), compare);
        for(int i=0;i<2*n;i++)
        {
            cout<<v[i].first<<" "<<v[i].second;
        }
        vector<int>temp;
        int count_S=0,count_E=0;
        int x=0;
        for(int i=0;i<2*n;i++)
        {
            if(v[i].second=='S')
                count_S++;
            else
                count_E++;
            if(count_S==count_E)
            {
                temp.push_back(v[x].first);
                temp.push_back(v[i].first);
                result.push_back(temp);
                temp.clear();
                count_S=0;
                count_E=0;
                x=i+1;
            }
        }
      return result;  
    }
   
};