class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        int n = nums1.size();
        unordered_map <int , int > mp;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a = nums1[i] + nums2[j];
                mp[a]++;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a = nums3[i] + nums4[j];
                int ans = 0 - a;
                if(mp.find(ans) != mp.end()){
                    count = count + mp[ans];
                }
            }
        }
        return count;
    }
};
