class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i = 1;
        deque <int> q;
        q.push_back(0);
        while(i<k){
            while((!q.empty()) && (nums[q.back()] <= nums[i]))
                q.pop_back();
                q.push_back(i);
            i++;
        }
        
        ans.push_back(nums[q.front()]);
        
        while(i<nums.size()){
            if(q.front() < i-k+1)
                q.pop_front();
            while((!q.empty()) && (nums[q.back()]<=nums[i]))
                q.pop_back();
            q.push_back(i);
            ans.push_back(nums[q.front()]);
            i++;
        }
        return ans;
    }
};
