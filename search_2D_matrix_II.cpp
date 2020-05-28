class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if (m == 0) return false;
    int n = matrix[0].size();

    int row = 0, column = n - 1;
    while (row < m && column >= 0) {
        if (matrix[row][column] == target)
            return true;
        else if (matrix[row][column] > target) {
            column--;
        } else 
            row++;
    }
    return false;
    }
};