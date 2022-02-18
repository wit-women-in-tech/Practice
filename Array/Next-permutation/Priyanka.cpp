class Solution {
public:
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void reverse(vector<int> &nums1,int index1,int index2){
        int l = index1;
        int h = index2;
        while(l<h){
            swap(&nums1[l],&nums1[h]);
            l++;
            h--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int index1 = -1,index2;
        if(nums.size()==1)
            return ;
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1 = i;
                break;
            }
        }
        if(index1 == -1){
            reverse(nums,0,nums.size()-1);
        }
        
        else{
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[index1]){
                index2 = i;
                break;
            }
        }
        swap(&nums[index1],&nums[index2]);
        reverse(nums,index1+1,nums.size()-1);
    }
    }
};
