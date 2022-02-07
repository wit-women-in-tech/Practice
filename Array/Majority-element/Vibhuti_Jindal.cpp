 int majorityElement(int a[], int size)
    {
         map<int,int>m;
         int n=size/2;
         for(int i=0;i<size;i++)
         {
             m[a[i]]++;
         }
         
         for(auto it:m){
            if(it.second>n){
               return it.first;
            }
        }
        
        return -1;
        
    }
