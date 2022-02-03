// Idea is to use 2 pointer approach
// taking pointers at start and end of array and storing height of water level in a variable.
// moving the pointer at which array has lesser value, because if we have two bars then water will be filled b/w them upto lower height bar.


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int i = 0;
        int j = n-1;
        int height = min(arr[i], arr[j]);
        long long ans = 0;
        while(i < j){
            if(arr[i] < arr[j]){
                if(arr[i] <= height){
                    ans += (height-arr[i]);
                }
                else{
                    height = arr[i];
                }
                i++;
            }
            else{
                if(arr[j] <= height){
                    ans += (height-arr[j]);
                }
                else{
                    height = arr[j];
                }
                j--;
            }
        }
        return ans;
    }
};
