public class Solution {
    public int PivotIndex(int[] nums) {
        
        int leftsum = 0;
        int rightsum = 0;

        for(int i=1; i<nums.Length; i++)
        {
            rightsum+=nums[i];

        }

        for(int i=0; i<nums.Length; i++)
        {
            if(rightsum==leftsum)
                return i;
            leftsum += nums[i];

            if(i+1 < nums.Length)
            {
                rightsum -= nums[i+1];
            }

        }

        return -1;
        
    }
}