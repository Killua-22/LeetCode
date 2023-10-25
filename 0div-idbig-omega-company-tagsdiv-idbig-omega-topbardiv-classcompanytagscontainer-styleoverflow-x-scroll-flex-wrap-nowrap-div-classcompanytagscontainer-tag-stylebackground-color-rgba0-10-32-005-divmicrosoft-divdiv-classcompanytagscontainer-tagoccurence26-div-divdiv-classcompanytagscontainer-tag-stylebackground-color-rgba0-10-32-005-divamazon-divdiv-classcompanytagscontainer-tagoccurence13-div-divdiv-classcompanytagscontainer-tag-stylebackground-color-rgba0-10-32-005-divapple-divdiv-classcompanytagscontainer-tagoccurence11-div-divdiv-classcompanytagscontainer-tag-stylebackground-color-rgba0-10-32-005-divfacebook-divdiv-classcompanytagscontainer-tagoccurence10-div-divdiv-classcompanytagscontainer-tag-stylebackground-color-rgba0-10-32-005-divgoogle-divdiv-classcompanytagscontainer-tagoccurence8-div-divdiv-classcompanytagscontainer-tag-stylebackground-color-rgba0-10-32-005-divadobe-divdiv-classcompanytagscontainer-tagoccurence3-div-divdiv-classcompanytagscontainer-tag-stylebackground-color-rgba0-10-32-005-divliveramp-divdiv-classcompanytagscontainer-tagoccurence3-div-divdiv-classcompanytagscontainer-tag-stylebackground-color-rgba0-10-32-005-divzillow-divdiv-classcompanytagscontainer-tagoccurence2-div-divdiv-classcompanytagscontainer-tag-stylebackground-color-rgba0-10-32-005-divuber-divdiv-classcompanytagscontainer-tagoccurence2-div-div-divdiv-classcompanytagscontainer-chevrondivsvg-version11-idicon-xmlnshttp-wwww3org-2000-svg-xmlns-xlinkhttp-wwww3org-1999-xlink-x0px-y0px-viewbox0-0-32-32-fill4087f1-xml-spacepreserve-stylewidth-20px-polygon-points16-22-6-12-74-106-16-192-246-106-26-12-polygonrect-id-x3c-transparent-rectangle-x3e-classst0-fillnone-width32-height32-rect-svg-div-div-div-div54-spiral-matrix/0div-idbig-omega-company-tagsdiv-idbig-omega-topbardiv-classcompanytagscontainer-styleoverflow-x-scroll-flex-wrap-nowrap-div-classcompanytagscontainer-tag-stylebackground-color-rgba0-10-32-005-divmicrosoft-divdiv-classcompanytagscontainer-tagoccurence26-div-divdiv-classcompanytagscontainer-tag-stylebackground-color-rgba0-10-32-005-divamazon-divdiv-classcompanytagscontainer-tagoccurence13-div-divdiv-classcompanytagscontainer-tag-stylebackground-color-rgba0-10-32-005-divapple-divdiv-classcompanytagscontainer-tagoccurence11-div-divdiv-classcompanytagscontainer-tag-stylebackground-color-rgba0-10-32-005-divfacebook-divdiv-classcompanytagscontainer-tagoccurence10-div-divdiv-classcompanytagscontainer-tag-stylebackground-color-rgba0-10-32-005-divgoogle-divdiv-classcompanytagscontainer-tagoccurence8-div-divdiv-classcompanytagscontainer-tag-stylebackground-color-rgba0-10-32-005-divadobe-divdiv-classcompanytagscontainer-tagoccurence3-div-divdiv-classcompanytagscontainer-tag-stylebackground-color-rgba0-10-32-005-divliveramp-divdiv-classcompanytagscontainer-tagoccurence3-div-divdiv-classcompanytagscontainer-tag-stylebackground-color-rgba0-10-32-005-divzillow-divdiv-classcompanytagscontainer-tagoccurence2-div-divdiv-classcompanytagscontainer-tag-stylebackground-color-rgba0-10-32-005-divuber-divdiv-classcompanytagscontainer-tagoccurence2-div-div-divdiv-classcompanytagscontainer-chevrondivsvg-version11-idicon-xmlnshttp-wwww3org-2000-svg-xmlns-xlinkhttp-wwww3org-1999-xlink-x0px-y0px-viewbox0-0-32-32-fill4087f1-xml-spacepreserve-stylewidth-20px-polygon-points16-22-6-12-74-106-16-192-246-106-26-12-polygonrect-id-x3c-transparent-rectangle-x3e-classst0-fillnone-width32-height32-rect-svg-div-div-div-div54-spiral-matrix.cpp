class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int m = matrix.size(), n = matrix[0].size();
        int rowBegin = 0, rowEnd = m - 1, colBegin = 0, colEnd = n - 1;
        while (rowBegin <= rowEnd && colBegin <= colEnd) {
            for (int j = colBegin; j <= colEnd; j++) res.push_back(matrix[rowBegin][j]);
            rowBegin++;
            for (int i = rowBegin; i <= rowEnd; i++) res.push_back(matrix[i][colEnd]);
            colEnd--;
            if (rowBegin <= rowEnd) {
                for (int j = colEnd; j >= colBegin; j--) res.push_back(matrix[rowEnd][j]);
                rowEnd--;
            }
            if (colBegin <= colEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) res.push_back(matrix[i][colBegin]);
                colBegin++;
            }
        }
        return res;
    }
};