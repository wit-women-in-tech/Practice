class Solution {
public:
  
//   Method 1: (brute force approach)
// Step 1: int cnt = 0;
// Step 2: run 4 for loop and check if nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0, do cnt++
// Step 3: return cnt
// TC = O(n^4)
//  SC = O(1)
 
//  Method 2: less optimal approach
//  Step 1: int cnt = 0;
//  Step 2: use unordered set to store one array's element 
//  Step 3: run 3 for loop for remaining 3 arrays and check if -(nums1[i] + nums2[j] + nums3[k] ) is preasent in set or not. If yes than do cnt++
//  Step 4: return cnt
//  TC = O(n^3)
//  SC = O(n)
 
//  Method 3: optimal approach
//  Step 1: in cnt = 0;
//  Step 2: take any two array and run 2 for loop and use unordered map to store their sum and occerence of sum (m[nums1[i]+nums2[j]++)
//  Step 3: for remaining 2 arrays run 2 for loop and check if  -(nums3[k]+nums4[l]) is preasent in map or not if yes then do cnt+=m[-(nums3[k]+nums4[l])]
//  (because nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
//   and        nums1[i] + nums2[j] == -( nums3[k] + nums4[l] ) )
//  Step 4: return cnt
//   TC = O(n^2)
//  SC = O(2n)
  
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        int cnt = 0 , n=nums1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cnt+=m[-(nums3[i]+nums4[j])];
            }
        }
        
        return cnt;
    }
};
