public class Solution {
    public int MinSizeSubarray(int[] nums, int target) {
        int n = nums.Length; 
        int sum = 0;
        foreach(int num in nums) sum+=num;
        
        int mul = target/sum;
        target = target%sum;
        
        int ans = int.MaxValue;
        sum = 0;
        
        for(int start = 0, end = 0; end < 2 * n; end++)
        {
            sum += nums[end % n];
            
            while(sum > target)
            {
                sum -= nums[start % n];
                start++;
            }
            
            if(sum == target)
                ans = Math.Min(ans, end - start + 1);
            
        }
        
        return ans == int.MaxValue ? -1 : ans + (mul * n);
        
    }
}