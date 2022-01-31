class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
         sort(arr, arr+n);
       
       // idea is to maximize the min height & minimize the max height
       int res = arr[n-1] - arr[0];
       int mx = arr[n-1];
       int mn = arr[0];
       
       for(int i = 0; i < n-1; i++)
       {
           if(arr[i+1] - k < 0)
              continue;
              
           // minimum element will be either (next element - k) or (first element + k)
           mn = min(arr[0] + k, arr[i+1] - k);
           
           // maximum element will be either (current element + k) or (last element - k)
           mx = max(arr[i] + k, arr[n-1] - k);
           
           res = min(res, mx - mn);  // upadating res if max - min is < previous res
       }
   
     return res;
    }
};
