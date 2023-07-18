public class Solution {
    public int Jump(int[] nums) {
        
        int jumps = 0;
        int farthest = 0;
        int current = 0;
        
        for(int i=0; i<nums.Length-1; i++)
        {
            farthest = Math.Max(farthest, nums[i]+i);
            if(i==current)
            {
                current = farthest;
                jumps++;
            }
        }
        
        return jumps;
        
        
    }
}