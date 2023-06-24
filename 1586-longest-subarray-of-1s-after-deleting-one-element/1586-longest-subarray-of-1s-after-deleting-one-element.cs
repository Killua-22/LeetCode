public class Solution {
    public int LongestSubarray(int[] nums) {
        int i = 0;
        int j = 0;
        
        int max = 0;
        int deleted_zeroes = 0;
        while(j<nums.Length)
        {
            if(nums[j]==0) deleted_zeroes++;

            if(deleted_zeroes>1)
            {
                if(nums[i]==0) deleted_zeroes--;

                i++;
            }
            
            if(deleted_zeroes <= 1)
            {
                max = Math.Max(max, j - i + 1);
            }
            j++;

        }
        
        return max-1;
    }
}