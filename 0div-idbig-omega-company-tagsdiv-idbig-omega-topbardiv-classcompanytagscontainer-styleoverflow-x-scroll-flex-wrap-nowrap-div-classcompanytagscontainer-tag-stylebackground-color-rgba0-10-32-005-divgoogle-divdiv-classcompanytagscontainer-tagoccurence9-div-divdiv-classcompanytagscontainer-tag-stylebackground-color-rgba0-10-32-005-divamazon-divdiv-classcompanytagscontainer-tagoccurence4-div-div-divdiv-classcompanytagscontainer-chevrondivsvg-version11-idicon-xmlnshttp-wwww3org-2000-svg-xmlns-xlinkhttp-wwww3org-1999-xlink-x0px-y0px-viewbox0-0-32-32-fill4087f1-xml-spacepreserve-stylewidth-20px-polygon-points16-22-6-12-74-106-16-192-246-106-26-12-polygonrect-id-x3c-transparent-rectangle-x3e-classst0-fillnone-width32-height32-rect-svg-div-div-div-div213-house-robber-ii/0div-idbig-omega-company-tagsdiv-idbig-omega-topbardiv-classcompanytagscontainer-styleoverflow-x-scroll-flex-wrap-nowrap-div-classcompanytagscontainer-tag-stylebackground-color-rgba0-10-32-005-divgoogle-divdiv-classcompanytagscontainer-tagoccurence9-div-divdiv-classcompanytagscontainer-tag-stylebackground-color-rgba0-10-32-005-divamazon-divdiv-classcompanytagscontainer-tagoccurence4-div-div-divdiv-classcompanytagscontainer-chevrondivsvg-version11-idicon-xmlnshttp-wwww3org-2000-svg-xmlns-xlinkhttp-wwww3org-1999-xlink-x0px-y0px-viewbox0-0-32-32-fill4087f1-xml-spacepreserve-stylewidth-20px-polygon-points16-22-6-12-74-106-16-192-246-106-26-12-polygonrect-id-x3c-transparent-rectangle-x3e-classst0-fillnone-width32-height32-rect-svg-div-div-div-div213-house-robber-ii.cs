public class Solution {
    public int Rob(int[] nums) {
        
        if(nums.Length == 1)
            return nums[0];
        
        return Math.Max(helper(nums, 0, nums.Length - 2), helper(nums, 1, nums.Length-1));
    }
    
    public int helper(int[] nums, int start, int end)
    {
        int x = 0;
        int y = 0;
        
        for(int i= start; i<=end; i++)
        {
            int temp = x;
            x = Math.Max(y + nums[i], x);
            y = temp;
        }
        
        return x;
    }
}