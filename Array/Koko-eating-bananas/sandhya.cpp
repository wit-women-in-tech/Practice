class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        if(h==piles.size())
            return piles[n-1];
        else{
            //binary search on array piles to find min value of k
            int low=1,high=piles[n-1];//low =1 because koko can eat minimum 1 banana and can eat max piles[n-1] banana at ones 
            
            while(low<high)
            {   
                int mid=low+(high-low)/2;
                int hrs=cal_hours_req(piles,mid,h);
                if(hrs<=h)
               {
                   high=mid;
               }
               if(hrs>h)
               {
                 low=mid+1;
               }
            }
            return low;
        }
    }
    int cal_hours_req(vector<int>& piles,int mid, int h)
    { int hrs_req=0;
        for(int i=0;i<piles.size();i++)
        {
            int n=piles[i]/mid;
            int rem=piles[i]%mid;
            if(rem>0)
            {
                rem=1;
            }
             hrs_req=hrs_req+n+rem;
            
        }
     return hrs_req;
    }
};