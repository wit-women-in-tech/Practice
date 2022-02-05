class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
         unordered_map<int,int>m;
         int n=size/2;
         for(int i=0;i<size;i++){
             m[a[i]]++;
         }
         
         for(auto it:m){
            if(it.second>n){
               return it.first;
            }
        }
        
        return -1;
       
        
    }
};
