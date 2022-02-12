#include<bits/stdc++.h>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>&piles,int h) {
        int len=piles.size();
        int k=INT_MAX;
        
        if(h==len)
              k=*max_element(piles.begin(),piles.end());
        
        int high=INT_MAX;
        int low=1;
        int speed=INT_MAX;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2; // we write like this to prevent overflow in case of larger test cases
            
            if(possible(piles,mid,h)){
                speed=mid;
                high=mid-1;
            }
            else
            
                low=mid+1;
        }
        return low;
    }
    
    int possible(vector<int> piles,int mid,int h)
    {
        int time=0;
        // int ans=0;
        for(int i=0;i<piles.size();i++){
            time+=(int)ceil(piles[i]*1.0/mid); //per hour speed
        }
        return time<=h;
    }

};

int main(){
    int n;
    cout<<"Enter the no of piles: ";
    cin>>n;
   vector<int> piles;
   cout<<"Enter the no bananas in each pile: ";
   int a=0;
   for(int i=0;i<n;i++){
       cin>>a;
       piles.push_back(a);
   }
   int h;
   cout<<"Enter the no of hours available: ";
   cin>>h;
   Solution s;
   cout<<"The minimum speed to be adopted is : "<<s.minEatingSpeed(piles,h);
   return 0;
}