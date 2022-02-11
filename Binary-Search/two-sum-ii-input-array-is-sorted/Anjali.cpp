// Using Two pointer
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        int start = 0;
        int end = a.size()-1;
        while(start < end){
            int sum = a[start] + a[end];
            if(sum == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(sum < target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};

// Using Binary Search
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i=0;i<N-1;i++){
            int lo = i+1;
            int hi = N;
            while(lo<hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target-nums[i]) return {i+1,mid+1};
                else if(nums[mid]>=target-nums[i]) hi=mid;
                else lo = mid+1;
            }
            if(lo!=nums.size() && nums[lo]==target-nums[i]) return {i+1,lo+1};
        }
        return {}; // not found
    }
};
