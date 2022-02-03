class Solution{
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long ans=0;
        int arr1[n]={0};  
        int arr2[n]={0}; 
        
        for(int i=1;i<n;i++)
        {
            arr1[i]=max(arr[i-1],arr1[i-1]);
        }
      
        for(int i=n-2;i>=0;i--)
        {
            arr2[i]=max(arr[i+1],arr2[i+1]);
        }
        for(int i=1;i<n-1;i++)
        {
            // cout<<arr1[i]<<" "<<arr2[i]<<" ";
            int k=min(arr1[i],arr2[i])-arr[i];
            // cout<<k<<" ";
            if(k>0)ans+=k;
            // cout<<ans<<endl;
        }
        return ans;
    }
};