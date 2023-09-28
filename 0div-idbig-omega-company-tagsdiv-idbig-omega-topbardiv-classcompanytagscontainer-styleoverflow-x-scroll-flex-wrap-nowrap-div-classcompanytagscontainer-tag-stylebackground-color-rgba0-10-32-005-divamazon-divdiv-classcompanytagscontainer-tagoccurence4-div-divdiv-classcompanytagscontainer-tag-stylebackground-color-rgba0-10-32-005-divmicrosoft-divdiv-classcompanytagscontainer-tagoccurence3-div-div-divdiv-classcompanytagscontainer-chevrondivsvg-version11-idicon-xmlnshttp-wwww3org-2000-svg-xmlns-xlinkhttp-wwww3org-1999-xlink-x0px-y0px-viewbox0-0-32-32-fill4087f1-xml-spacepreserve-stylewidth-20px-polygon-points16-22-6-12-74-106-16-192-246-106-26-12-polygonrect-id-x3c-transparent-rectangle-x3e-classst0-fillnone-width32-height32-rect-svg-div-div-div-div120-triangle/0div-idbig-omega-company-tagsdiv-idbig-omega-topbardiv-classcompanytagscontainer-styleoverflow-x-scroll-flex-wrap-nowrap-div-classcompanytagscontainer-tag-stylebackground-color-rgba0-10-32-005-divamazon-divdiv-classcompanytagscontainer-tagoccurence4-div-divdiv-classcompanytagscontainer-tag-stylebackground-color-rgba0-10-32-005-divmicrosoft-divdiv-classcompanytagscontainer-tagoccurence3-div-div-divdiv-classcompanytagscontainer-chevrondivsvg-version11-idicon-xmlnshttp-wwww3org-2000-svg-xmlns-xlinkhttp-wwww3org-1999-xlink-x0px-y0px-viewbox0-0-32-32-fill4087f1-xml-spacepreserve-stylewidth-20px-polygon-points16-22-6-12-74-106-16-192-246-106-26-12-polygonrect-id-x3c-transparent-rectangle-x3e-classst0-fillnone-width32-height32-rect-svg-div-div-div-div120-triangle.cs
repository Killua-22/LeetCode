public class Solution {
    public int MinimumTotal(IList<IList<int>> triangle) {
        int n = triangle.Count;
        int m = triangle[n-1].Count;
        
        int[,] dp = new int[m+1, n+1];
        
        for(int i=0; i<m; i++)
        {
            dp[n-1, i] = triangle[n-1][i];
        }
        
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                dp[i, j] = Math.Min(dp[i+1, j], dp[i+1, j+1]) + triangle[i][j];
            }
        }
        
        
        return dp[0, 0];
    }
}