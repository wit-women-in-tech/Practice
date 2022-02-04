 void rotate(vector<vector<int>>& matrix) {
        int N=matrix.size();
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int j=0;j<N/2;j++){
            for(int i=0;i<N;i++){
                swap(matrix[i][j],matrix[i][N-j-1]);
            }
        }
    }