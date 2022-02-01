// The thing we need to check here is that whether there is a common part between two intervals or not.
// To do this, initially sorting the vector according to start values.
// then we check 
//    if end vaue of last interval in ans >= start value of the interval.: means these two intervals have something common so can be merged
//       to merge we know that start of ans.back() < start of intervals[i], so we only need to edit end interval which will be maximum of end values of both
//    else: (it doesn't have anything common from previous intervals)
//        so we only need to add this interval to ans.

// Time Complexity: O(nlogn)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans = {intervals[0]};
        for(int i = 1; i < n; i++){
            if(ans.back()[1] >= intervals[i][0]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
