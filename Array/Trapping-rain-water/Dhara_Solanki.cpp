lass Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        //idea is make 2 array leftMax and rightMax
        //leftMax array will contain left most maximum element at index i
        //rightMax array will contain right most maximum element at index i
        
        int leftMax[n],rightMax[n];
      
        leftMax[0]=arr[0]; //leftmost max element for first element will be first element of array
        rightMax[n-1]=arr[n-1]; //right most max element for last element will be last element of array 
        
        //for leftMax array run loop from i = 1 to n-1 (left to right)
        for(int i=1;i<n;i++)
        leftMax[i]=max(arr[i],leftMax[i-1]);
        
        //for rightMax array run loop from i = n-2 to 0 (right to left)
        for(int i=n-2;i>=0;i--)
        rightMax[i]=max(arr[i],rightMax[i+1]);
        
        long long water=0; //water variable will store totale trapped water
        
        //to count totale trapped water we need to run loop from i=1 to n-2 because first and last element can't store water
        for(int i=1;i<n-1;i++)
        water+=min(leftMax[i],rightMax[i])-arr[i];
        
        return water;
    }
};
