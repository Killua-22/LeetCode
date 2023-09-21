public class Solution {
    public int CoinChange(int[] coins, int amount) {
        
        int[] dp = Enumerable.Repeat(amount+1, amount+1).ToArray();
        dp[0] = 0;
        
        for(int i=0; i<amount+1; i++)
        {
            foreach(var c in coins)
            {
                if(i - c >= 0)
                    dp[i] = Math.Min(dp[i], 1 + dp[i - c]);
            }
        }
        
        if(dp[amount]!=amount+1)
            return dp[amount];
        else 
            return -1;
    }
    
   
}