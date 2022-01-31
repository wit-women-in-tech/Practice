class Solution {
public:
    
    int timeTaken(vector<int>& piles, int k){
        int time =0;
        for(int i=0;i<piles.size();i++){
            time+=(piles[i]+k-1)/k; //same as ceil(1.0 * piles[i] / k) 
        }
        return time;
    }
    
    //idea is to use binary search 
    //for low and high value we can initialize low as 1 and high as max of piles[i] or as 1000000000
    //we are using mid value as k and checking if the total time is <= given hours or not
    //We need to find minimum k value 
    //So there are 2 case: 1. for current mid total time taken is <= h
    //                     2. for current mid total time taken is > h
    //for case one make high = mid (because current mid might be our answer) 
    //for case two make low = mid+1
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(),low=1,high=INT_MIN;
    
        for(int i=0;i<n;i++){
            high=max(high,piles[i]); //finding max element from piles array
        }
        
        while(low<high){
            int mid=(high+low)/2;
            
            int time = timeTaken(piles,mid);
            
            if(time<=h)
                high=mid;
            
            else
                low=mid+1;
        }
        
        return low;
    }
};
