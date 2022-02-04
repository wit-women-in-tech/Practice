// idea is to use hashtable.
// we are storing all possible sums from two arrays.


class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        int ans = 0;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                mp[nums4[i] + nums3[j]]++;
            
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                    int sum = 0-nums1[i]-nums2[j];
                    if(mp[sum]){
                        ans += mp[sum];
                    }
                
            }
        }
        return ans;
    }
};
