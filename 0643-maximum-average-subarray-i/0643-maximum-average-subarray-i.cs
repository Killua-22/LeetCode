public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        double max = 0;
        int sum;
        int[] csum = new int[nums.Length];
        csum[0] = nums[0];
        for(int i=1; i<nums.Length; i++)
        {
            csum[i] = nums[i] + csum[i-1];
        }
        max = csum[k-1];
        for(int i=k; i<nums.Length; i++)
        {
            if(csum[i]-csum[i-k] > max)
                max = csum[i] - csum[i-k];
        }

        return max/k;
        
    }
}