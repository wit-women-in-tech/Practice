class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
            vector<int> ans;
            
            int startRow = 0;
            int endRow = r - 1;
            int startCol = 0;
            int endCol = c - 1;
        
            while(startCol<= endCol and startRow <=endRow){
        
                //Start Row
                for(int col = startCol ; col<=endCol; col++){
                    ans.push_back(matrix[startRow][col]);
                }
        
                //End Col
                for(int row=startRow + 1;row<=endRow;row++){
                    ans.push_back(matrix[row][endCol]);
                }
        
                //End Row
                for(int col=endCol - 1; col>=startCol;col--){
        	    //Avoid Duplicate Printing of row elements
                    if(startRow==endRow){
                        break;
                    }
                    ans.push_back(matrix[endRow][col]);
                }   
        
                //Start Col
                for(int row = endRow-1; row >=startRow + 1;row--){
                    //Avoid Duplicate Printing of column elements
                    if(startCol==endCol){
                        break;
                    }
                    ans.push_back(matrix[row][startCol]);
                }
        
                
                startRow++;
                endRow--;
                startCol++;
                endCol--;
        }
        
        return ans;
    }
};
