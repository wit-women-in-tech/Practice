class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=i;j<col;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0;i<matrix.size();i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};
