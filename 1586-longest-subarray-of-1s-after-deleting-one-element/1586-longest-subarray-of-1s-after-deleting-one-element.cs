public class Solution {
    public int LongestSubarray(int[] nums) {
        int i = 0;
        int j = 0;
        int series = 0;
        int max = 0;
        bool can_del = true;
        while(j<nums.Length)
        {
            if(nums[j]==1)
                series++;
            else if(nums[j]==0 && can_del)
                can_del = false;
            else
            {
                max = Math.Max(series, max);
                if(nums[i]==1)
                {
                    series = 0;
                    can_del = true;
                    j = i;
                }
                i++;
            }
            max = Math.Max(series, max);
            
            j++;

        }
        if(max == nums.Length) return max-1;
        return max;
    }
}