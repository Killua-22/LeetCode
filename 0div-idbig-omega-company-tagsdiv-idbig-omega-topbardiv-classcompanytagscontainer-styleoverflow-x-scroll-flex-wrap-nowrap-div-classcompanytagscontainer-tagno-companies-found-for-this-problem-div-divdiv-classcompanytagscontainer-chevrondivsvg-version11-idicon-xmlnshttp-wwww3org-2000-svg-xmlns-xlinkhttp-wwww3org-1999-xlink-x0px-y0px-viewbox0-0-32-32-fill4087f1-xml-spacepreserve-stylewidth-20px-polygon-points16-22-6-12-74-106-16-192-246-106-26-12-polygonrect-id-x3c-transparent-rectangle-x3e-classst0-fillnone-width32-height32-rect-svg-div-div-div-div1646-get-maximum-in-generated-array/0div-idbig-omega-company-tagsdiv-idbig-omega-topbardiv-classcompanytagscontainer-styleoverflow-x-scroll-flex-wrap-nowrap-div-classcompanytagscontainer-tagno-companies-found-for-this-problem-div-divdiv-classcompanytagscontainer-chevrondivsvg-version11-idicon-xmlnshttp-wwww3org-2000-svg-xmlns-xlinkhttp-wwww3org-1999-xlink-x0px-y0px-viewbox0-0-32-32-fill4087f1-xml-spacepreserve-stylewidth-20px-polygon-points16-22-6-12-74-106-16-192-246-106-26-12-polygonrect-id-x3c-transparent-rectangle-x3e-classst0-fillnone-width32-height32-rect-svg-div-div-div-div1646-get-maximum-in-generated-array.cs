public class Solution {
    public int GetMaximumGenerated(int n) {
        if(n<=1)
            return n;
        
        int[] dp = new int[n+1];
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                dp[i] = dp[i/2];
            }
            else
            {
                int x = i/2;
                dp[i] = dp[x] + dp[x+1];
            }
        }
        
        return dp.Max();
    }
}