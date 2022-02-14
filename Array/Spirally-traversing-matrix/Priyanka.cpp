 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
    vector<int> ans;
    int row_start = 0 , col_start = 0;
    int row_end = r-1 , col_end = c-1;
    while(row_start <= row_end && col_start <= col_end){
        if(row_start <= row_end && col_start <= col_end){
        for(int row = col_start;row<=col_end;row++)
        ans.push_back(matrix[row_start][row]);
        row_start++;
        }
    
        if(row_start <= row_end && col_start <= col_end){
        for(int col = row_start;col<=row_end;col++)
        ans.push_back(matrix[col][col_end]);
        col_end--;
        }
        
        if(row_start <= row_end && col_start <= col_end){
        for(int col = col_end;col>=col_start;col--)
            ans.push_back(matrix[row_end][col]);
            row_end--;
        }
    
        if(row_start <= row_end && col_start <= col_end){
        for(int row = row_end;row>=row_start;row--)
            ans.push_back(matrix[row][col_start]);
            col_start++;
        }
        
    }
    return ans;
    }
