public class Solution {
    public int Rob(int[] nums) {
        int[] memo = new int[nums.Length+1];
        
        memo[0] = 0;
        memo[1] = nums[0];
        
        for(int i=1; i<nums.Length; i++)
        {
            int val = nums[i];
            memo[i+1] = Math.Max(memo[i], memo[i-1]+val);
        }
        
        return memo[nums.Length];
    }
    
    
}