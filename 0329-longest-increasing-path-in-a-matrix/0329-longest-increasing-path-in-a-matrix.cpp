class Solution {
public:

    bool isValid(int i, int j, int n, int m) {
        if(i<0 || i>=n || j<0 || j>=m)   return false;
        return true;
    }

    int dfs(int i, int j, int n, int m, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
        
        if(dp[i][j] != 0) return dp[i][j];

        int maxPath = 1;

        for(int x=-1; x<=1; x++) {
            for(int y=-1; y<=1; y++) {
                if(x!=0 && y!=0) continue;

                int ni = i + x;
                int nj = j + y;

                if(isValid(ni, nj, n, m) && matrix[ni][nj] > matrix[i][j]) {
                    int len = dfs(ni, nj, n, m, matrix, dp) + 1;
                    maxPath = max(len, maxPath);
                }
            }
        }

        dp[i][j] = maxPath;
        return maxPath;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty())
            return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        int res = 0;
        int temp;

        vector<vector<int>> dp(n, vector<int>(m, 0));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                res = max(res, dfs(i, j, n, m, matrix, dp));
            }
        }

        return res;
    }
};