// Time Complexity: O(n^2)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n/2; i++){
            int a;
            for(int j = i; j < n-i-1; j++){
                a = matrix[j][i];
                matrix[j][i] = matrix[n-1-i][j];
                matrix[n-1-i][j] = matrix[n-1-j][n-1-i];
                matrix[n-1-j][n-1-i] = matrix[i][n-1-j];
                matrix[i][n-1-j] = a;
            } 
        }
    }
};
