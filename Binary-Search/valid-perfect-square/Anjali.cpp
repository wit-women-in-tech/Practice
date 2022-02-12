class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1;
        int e = num;
        
        if(num==1)  return true;
        
        while(s<e){
            float mid = s + (e-s)/2;
            if(mid*mid == num){
                return true;
            }
            else if(num/mid > mid)  s=mid+1;
            else    e = mid;
        }
        
        return false;
    }
};
