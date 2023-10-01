public class Solution {
    public long MaximumTripletValue(int[] nums) {
        int len = nums.Length;
        
        int[] pre = new int[len];
        int[] suf = new int[len];
        int max = nums[0];
        for(int i=1; i<len; i++)
        {
            pre[i] = max;
            max = Math.Max(max, nums[i]);
        }
        max = nums[len-1];
        for(int i=len-2; i>=0; i--)
        {
            suf[i] = max;
            max = Math.Max(max, nums[i]);
        }
        
        long res = 0;
        for(int i=0; i<len-1; i++)
        {
            long temp = (pre[i] - nums[i]) * (long)suf[i];
            if(temp > res)
                res = temp;
        }
        
        return res;
    }
}