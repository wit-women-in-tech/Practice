// using advanced binary search
// we are making a feasible function which tells us whether the time taken to eat bananas is <= h or not.
// the ans must lie in between 1 and max of all piles
// then we take a mid element and check if it is feasible at mid.
// if yes, then the ans must be equal to or less than mid. so we shift our end pointer to mid-1 and store mid in ans variable.
// if no, then ans must be greater than mid, so shifting start to mid+1;

class Solution {
public:
    bool feasible(vector<int> piles, int h, int ans){
        int count = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++){
            count += piles[i]/ans;
            count += (piles[i]%ans)? 1:0 ;  
            if(count > h)   return false;
        }
        return true;
        
    }
    
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int s = 1, e = piles[n-1];
        int ans = piles[n-1];
        while(s <= e){
            int mid = s + (e-s)/2;
            if(feasible(piles, h, mid)){
                e =  mid-1;
                ans = mid;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};
