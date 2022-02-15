 vector<int> maxSlidingWindow(vector<int>& v, int k) {
        deque<int>dq;
        vector<int>ans;
        int n=v.size();
       for(int i=0;i<k-1;i++)
       {
           while(dq.size() && v[dq.back()]<v[i])dq.pop_back();
           dq.push_back(i);
       }
        for(int i=k-1;i<n;i++)
        {
            
            while(dq.size() && v[dq.back()]<v[i])dq.pop_back();
            dq.push_back(i);
            while(dq.front()<i-k+1)dq.pop_front();
            ans.push_back(v[dq.front()]);
        }
        return ans;
    }