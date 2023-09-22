public class Solution {
    public int LengthOfLIS(int[] nums) {
        
        int[] dp = Enumerable.Repeat(1, nums.Length).ToArray();
        
        for(int i=nums.Length-1; i>=0; i--)
        {
            for(int j=i+1; j<nums.Length; j++)
            {
                if(nums[i] < nums[j])
                    dp[i] = Math.Max(dp[i], 1 + dp[j]);
            }
        }
        
        return dp.Max();
    }
}