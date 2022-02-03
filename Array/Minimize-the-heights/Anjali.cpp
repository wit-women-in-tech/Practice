// Time Complexity: O(nlogn)

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        if(n == 1)  return 0;
        
        sort(arr,arr+n);
        
        int mx = arr[n-1];
        int mn = arr[0];
        int ans = arr[n-1] - arr[0];
        
        for(int i = 0; i < n-1; i++){
            if((arr[i+1]-k)<0)
               continue;
            mx = max(arr[n-1] - k, arr[i] + k);
            mn = min(arr[i+1] - k, arr[0] + k);
            ans = min(ans, mx-mn);
        }
        return ans;
    }
};
