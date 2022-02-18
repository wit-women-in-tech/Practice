class Solution {
public:
    int trap(vector<int>& height) {
         int l = 0,h = height.size() - 1;
        int left = 0,right = 0;
        int water = 0;
        while(l<=h){
            if(height[l] <= height[h]){
                if(height[l] >= left)
                left = height[l];
            else
                water += left - height[l];
                l++;
            }
            else{
                if(height[h] >= right)
                    right = height[h];
                else
                    water += right - height[h];
                h--;
            }
        }
        return water;
    }
};
