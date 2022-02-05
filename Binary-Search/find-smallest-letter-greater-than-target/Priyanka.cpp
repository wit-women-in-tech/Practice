class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if(letters[n-1] <= target)
            return letters[0];
         int l = 0;
        int h = n-1;
        int ans = -1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(letters[mid] > target){
                ans = mid;
                h = mid-1;
             }
            else
            l = mid+1;
    }
    return letters[ans];
    }
};
