class Solution {
public:
    
    int count(vector<vector<int>> &dp, int m, int n)
    {
        if(m==1 || n==1)
            return dp[m][n] = 1;
        
        if(dp[m][n] == 0)
        {
            dp[m][n] = count(dp, m-1, n) + count(dp, m, n-1);
        }
        
        return dp[m][n];
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        return count(dp, m, n);
    }
};