public class Solution {
    public int MinSubArrayLen(int target, int[] nums) {
        int i = 0;
        int sum = 0;
        int n = nums.Length;
        int min_Length = int.MaxValue;
        
        for(int j=0; j<n; j++)
        {
            sum += nums[j];
            while(sum >= target)
            {
                min_Length = Math.Min(min_Length, j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        
        return min_Length != int.MaxValue ? min_Length : 0;
    }
}