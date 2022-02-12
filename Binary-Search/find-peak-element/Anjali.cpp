/* 
   if middle element is greater than next, then either this element or some element in its left will be peak element
        if its prev element is less, then it is peak otherwise we can move like this and the leftmst element can be peak.
    else peak will be present in its right.
*/

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        if(n == 1)  return 0;
        
        int s = 0; 
        int e = n-1;
        while(s < e){
            int mid = s + (e-s)/2;
            if(a[mid] > a[mid+1])   e = mid;
            else    s = mid+1;
            
        }
        return s;
    }
};
