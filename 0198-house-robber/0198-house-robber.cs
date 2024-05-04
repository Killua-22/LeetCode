public class Solution {
//     int[] memo;
//     public int Rob(int[] nums) {
//         memo = new int[nums.Length+1];
//         Array.Fill(memo, -1);
//         return rob(nums, nums.Length-1);
//     }
    
//     public int rob(int[] nums, int length) {
//         if(length < 0)
//             return 0;
        
//         if(memo[length] >= 0)
//             return memo[length];
        
//         int result = Math.Max(rob(nums, length-2) + nums[length], rob(nums, length-1));
//         memo[length] = result;
//         return result;
//     }
    
    public int Rob(int[] nums) {
        int[] dp = new int[nums.Length+1];
        
        dp[0] = 0;
        dp[1] = nums[0];
        
        for(int i=1; i<nums.Length; i++) {
            int val = nums[i];
            dp[i+1] = Math.Max(dp[i], dp[i-1]+val);
        }
        
        return dp[nums.Length];
    }
}