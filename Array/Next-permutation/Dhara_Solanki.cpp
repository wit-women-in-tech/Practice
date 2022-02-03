class Solution {
public:
    //Algo to find next permutation
    //Step 1: traverse array from right to left from i= second last index to 0 and while traversing if we find array is increasing break the loop as edge case if array is in decreasing order than just reverse the array 
    //Step 2: now again traverse the array right to left from last element to index i and find greater element than element at index i. when we find it break the loop
    //Step 3: swap element at index i and j
    //Step 4: reverse the array from i+1 index to last index
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }else{
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i])
                    break;
            }
            swap(nums[j],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
