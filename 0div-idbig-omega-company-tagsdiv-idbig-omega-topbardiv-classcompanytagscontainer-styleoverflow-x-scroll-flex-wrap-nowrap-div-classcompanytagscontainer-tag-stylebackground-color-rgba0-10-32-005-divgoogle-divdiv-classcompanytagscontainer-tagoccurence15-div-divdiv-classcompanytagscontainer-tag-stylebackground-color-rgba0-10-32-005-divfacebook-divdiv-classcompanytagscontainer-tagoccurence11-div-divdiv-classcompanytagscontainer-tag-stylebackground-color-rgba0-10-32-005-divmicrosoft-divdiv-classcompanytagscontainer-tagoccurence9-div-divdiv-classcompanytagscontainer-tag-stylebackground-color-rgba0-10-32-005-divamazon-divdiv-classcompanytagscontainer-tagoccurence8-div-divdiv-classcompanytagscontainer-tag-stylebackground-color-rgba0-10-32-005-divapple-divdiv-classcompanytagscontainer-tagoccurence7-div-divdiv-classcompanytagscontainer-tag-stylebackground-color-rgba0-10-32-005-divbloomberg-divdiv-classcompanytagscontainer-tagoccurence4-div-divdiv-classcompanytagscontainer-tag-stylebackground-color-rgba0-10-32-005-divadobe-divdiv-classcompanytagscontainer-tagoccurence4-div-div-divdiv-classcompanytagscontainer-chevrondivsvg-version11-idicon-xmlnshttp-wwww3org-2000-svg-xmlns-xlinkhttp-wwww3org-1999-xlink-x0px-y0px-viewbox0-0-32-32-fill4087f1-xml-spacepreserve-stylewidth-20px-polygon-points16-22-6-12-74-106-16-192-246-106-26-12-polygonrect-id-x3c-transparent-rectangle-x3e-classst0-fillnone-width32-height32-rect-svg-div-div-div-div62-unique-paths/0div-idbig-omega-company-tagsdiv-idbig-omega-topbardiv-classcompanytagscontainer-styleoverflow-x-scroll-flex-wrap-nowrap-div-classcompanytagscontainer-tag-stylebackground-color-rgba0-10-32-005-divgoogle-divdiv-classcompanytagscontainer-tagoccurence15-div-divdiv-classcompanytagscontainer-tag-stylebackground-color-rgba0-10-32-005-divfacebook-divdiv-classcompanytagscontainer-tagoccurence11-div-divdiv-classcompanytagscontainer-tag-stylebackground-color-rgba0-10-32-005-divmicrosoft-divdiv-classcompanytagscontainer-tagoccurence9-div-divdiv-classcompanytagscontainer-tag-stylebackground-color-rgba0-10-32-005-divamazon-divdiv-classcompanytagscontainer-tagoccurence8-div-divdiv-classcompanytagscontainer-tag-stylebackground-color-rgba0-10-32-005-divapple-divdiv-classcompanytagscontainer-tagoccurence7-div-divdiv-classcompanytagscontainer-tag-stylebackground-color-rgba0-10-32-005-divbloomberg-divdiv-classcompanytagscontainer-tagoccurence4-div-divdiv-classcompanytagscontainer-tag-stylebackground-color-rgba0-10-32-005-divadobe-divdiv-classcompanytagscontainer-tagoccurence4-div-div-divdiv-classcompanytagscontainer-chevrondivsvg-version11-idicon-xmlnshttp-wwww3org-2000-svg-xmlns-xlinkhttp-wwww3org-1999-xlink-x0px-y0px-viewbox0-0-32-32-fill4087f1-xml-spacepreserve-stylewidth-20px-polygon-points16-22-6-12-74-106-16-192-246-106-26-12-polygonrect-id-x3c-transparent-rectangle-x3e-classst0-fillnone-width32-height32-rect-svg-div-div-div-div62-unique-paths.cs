public class Solution {
    
    public int count(int m, int n, int[,] dp)
    {
        if(m==1 || n==1)
            return dp[m,n] = 1;
        
        if(dp[m,n] == 0)
        {
            dp[m, n] = count(m-1, n, dp) + count(m, n-1, dp);
            
            
        }
        
        return dp[m, n];
    }
    
    public int UniquePaths(int m, int n) {
        
        int[,] dp = new int[m+1, n+1];
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         dp[i, j] = 0;
        //     }
        // }
        return count(m, n, dp);
    }
}