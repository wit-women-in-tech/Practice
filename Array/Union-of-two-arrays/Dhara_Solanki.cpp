class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //idea is to add all elements for array a and b into hash set 
        //because hash set can cantain only distint element we can return size of hash set as answer
        unordered_set<int> S;
        int res=0;
        for(int i=0;i<n;i++){
            S.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            S.insert(b[i]);
        }
        res=S.size();
        
        return res;
    }
};
