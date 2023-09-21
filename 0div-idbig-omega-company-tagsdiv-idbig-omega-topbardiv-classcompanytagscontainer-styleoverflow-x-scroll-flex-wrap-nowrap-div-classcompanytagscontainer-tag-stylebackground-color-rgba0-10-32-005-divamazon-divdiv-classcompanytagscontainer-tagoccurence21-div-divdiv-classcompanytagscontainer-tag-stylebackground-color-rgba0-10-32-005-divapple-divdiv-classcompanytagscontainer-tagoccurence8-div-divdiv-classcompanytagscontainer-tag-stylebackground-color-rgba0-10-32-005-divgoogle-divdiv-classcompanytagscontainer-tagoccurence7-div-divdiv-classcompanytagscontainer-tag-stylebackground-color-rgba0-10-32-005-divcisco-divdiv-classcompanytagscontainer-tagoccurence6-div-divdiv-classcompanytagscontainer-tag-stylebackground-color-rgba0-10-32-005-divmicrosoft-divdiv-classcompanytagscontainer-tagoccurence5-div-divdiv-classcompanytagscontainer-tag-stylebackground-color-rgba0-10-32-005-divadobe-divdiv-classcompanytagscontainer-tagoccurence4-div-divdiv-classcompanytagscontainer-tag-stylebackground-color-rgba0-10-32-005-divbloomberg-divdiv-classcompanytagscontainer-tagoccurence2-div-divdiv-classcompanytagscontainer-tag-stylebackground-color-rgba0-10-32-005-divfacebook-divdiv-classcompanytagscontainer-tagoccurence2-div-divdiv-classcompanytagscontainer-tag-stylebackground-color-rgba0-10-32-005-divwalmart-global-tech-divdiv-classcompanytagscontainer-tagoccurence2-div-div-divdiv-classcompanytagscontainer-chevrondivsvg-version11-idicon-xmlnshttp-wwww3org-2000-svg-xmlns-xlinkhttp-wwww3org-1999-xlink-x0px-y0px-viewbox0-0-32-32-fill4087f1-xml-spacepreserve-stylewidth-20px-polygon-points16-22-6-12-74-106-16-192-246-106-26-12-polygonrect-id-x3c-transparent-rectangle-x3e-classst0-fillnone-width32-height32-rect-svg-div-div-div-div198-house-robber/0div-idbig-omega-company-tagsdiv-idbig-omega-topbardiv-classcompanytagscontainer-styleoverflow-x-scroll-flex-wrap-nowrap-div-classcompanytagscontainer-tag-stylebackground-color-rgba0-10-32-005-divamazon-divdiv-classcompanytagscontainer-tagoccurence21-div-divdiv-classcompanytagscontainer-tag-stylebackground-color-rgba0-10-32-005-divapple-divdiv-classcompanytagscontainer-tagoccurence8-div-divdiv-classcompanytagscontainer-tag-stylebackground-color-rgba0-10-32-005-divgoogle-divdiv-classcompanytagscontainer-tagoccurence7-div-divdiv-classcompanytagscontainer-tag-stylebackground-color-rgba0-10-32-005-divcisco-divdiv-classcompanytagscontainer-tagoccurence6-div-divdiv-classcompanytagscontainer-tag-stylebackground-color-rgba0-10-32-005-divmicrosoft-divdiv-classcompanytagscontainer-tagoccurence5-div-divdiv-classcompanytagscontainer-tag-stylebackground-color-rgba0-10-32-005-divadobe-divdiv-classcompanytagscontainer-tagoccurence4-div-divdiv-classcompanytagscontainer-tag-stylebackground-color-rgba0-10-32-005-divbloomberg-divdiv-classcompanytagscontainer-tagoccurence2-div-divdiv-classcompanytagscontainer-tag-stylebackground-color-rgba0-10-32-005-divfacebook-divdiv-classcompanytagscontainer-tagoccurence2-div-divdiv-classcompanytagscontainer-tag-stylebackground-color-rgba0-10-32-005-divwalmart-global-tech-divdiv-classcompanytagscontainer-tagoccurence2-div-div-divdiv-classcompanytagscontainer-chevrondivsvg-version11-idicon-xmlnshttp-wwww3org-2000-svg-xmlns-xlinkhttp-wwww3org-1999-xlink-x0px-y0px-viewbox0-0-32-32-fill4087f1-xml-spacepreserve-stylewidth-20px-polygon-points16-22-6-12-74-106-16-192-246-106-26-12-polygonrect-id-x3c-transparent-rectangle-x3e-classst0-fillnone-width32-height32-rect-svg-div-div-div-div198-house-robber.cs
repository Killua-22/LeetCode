public class Solution {
    public int Rob(int[] nums) {
//         if(nums.Length == 0)
//             return 0;
//         int[] memo = new int[nums.Length+1];
        
//         memo[0] = 0;
//         memo[1] = nums[0];
        
//         for(int i=1; i<nums.Length; i++)
//         {
//             int val = nums[i];
//             memo[i+1] = Math.Max(memo[i], memo[i-1]+val);
//         }
        
//         return memo[nums.Length];
        
        if(nums.Length == 0)
            return 0;
        int prev1 = 0;
        int prev2 = 0;
        
        foreach(var num in nums)
        {
            int temp = prev1;
            prev1 = Math.Max(prev2 + num, prev1);
            prev2 = temp;
        }
        
        return prev1;
    }
    
    
}