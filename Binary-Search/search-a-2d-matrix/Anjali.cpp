class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int size = matrix.size();
        int s = 0, e = n-1, row = 0;
        while(row < size){
            if(matrix[row][e] == target)    return true;
            else if(matrix[row][e] < target)    row++;
            else{
                while(s <= e){
                    int mid = s+ (e-s)/2;
                    if(matrix[row][mid] == target)  return true;
                    else if(matrix[row][mid] < target)  s = mid+1;
                    else    e = mid-1;
                } 
                break;
            }
        }
        return false;
    }
};
