
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
   
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) {
        vector<int> ans;
        int rs=0;
        int cs=0;
        int re=r-1;
        int ce=c-1;
        while(rs<=re && cs<=ce){
          // traversing left to right
            if(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++){
                ans.push_back(a[rs][i]);
            }
            rs++;
            }
          
            //traversing top to bottom
            if(rs<=re && cs<=ce){
            for(int i=rs;i<=re;i++){
                ans.push_back(a[i][ce]);
            }
            ce--;
            }
          
            // traversing right to left
            if(rs<=re && cs<=ce){
            for(int i=ce;i>=cs;i--){
                ans.push_back(a[re][i]);
            }
            re--;
            }
          
            // traversing bottom to top
            if(rs<=re && cs<=ce){
            for(int i=re;i>=rs;i--){
                ans.push_back(a[i][cs]);
            }
            cs++;
            }
        }
        return ans;
    }
};
