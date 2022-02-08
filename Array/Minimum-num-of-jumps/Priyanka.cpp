 int minJumps(int arr[], int n){
        // Your code here
        if(arr[0] == 0 && n==1)
        return 0;
        if(arr[0] == 0)
        return -1;
        int step = arr[0];
        int max_reach = arr[0];
        int jumps = 1;
        
        for(int i=1;i<n;i++){
            max_reach = max(max_reach,arr[i]+i);
            step--;
            
            if(i == n-1)
            return jumps;
            
            if(step == 0){
                jumps++;
                if(max_reach<=i)
                return -1;
                step = max_reach - i;
            }
        }
    }
