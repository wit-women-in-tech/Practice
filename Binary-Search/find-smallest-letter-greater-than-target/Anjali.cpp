class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int n = a.size();
        if((target < a[0]) || (target >= a[n-1]))  return a[0];
         
        int s = 0;
        int e = n-1;
        while(s < e){
            int mid = s + (e-s)/2;
            if(a[mid] > target) {
                e = mid;
            }    
            else    s = mid+1;
        }
        return a[e];
    }
};
