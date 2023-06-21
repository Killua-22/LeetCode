public class Solution {
    public int[] ProductExceptSelf(int[] nums) {

        int n = nums.Length;
        int[] prefix = new int[n+1];
        int[] suffix = new int[n+1];
        int[] final = new int[n];

        prefix[0] = 1;
        suffix[n] = 1;

        for(int i=1; i<n+1; i++)
            prefix[i] = nums[i-1] * prefix[i-1];
        
        for(int i=n-1; i>0; i--)
            suffix[i] = nums[i] * suffix[i+1];

        for(int j=0; j<n; j++)
        {
            final[j] = prefix[j] * suffix[j+1];
        }

        return final;
    }
}