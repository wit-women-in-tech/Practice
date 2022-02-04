 int minJumps(int arr[], int n){
        // Your code here
        int mx=arr[0],j=0,ans=0,i=0;
        while(i<n-1)
        {
            for(;j<=i;j++)
            {
                mx=max(mx,j+arr[j]);
            }
            
            if(mx<j)return -1;
            //  cout<<j<<" "<<mx<<" "<<ans+1<<endl;
            i=mx;
            // if(i>=n-1)break;
            //  cout<<i<<endl;
            ans++;
            
        }
        return ans;
    }