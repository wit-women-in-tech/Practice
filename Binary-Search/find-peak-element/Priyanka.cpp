class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
       int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            int prev = (mid-1+n)%n;
            int next = (mid+1+n)%n;
            
            if((nums[mid]>nums[prev]) && (nums[mid] > nums[next]))
                return mid;
            else if(nums[mid] < nums[next])
                l = mid+1;
                else if(nums[mid] < nums[prev])
                    h = mid -1;
        }
        return -1;
    }
};
