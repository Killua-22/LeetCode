public class Solution {
    public int LongestOnes(int[] nums, int k) {
        int max = 0;
        int series = 0;
        int i = 0;
        int j =0;
        int flip = k;

        while(j<nums.Length)
        {
            
            if(nums[j]==1)
                series++;
            else if(nums[j]==0 && flip>0)
            {
                series++;
                flip--;
            }
                
            else if(nums[j]==0 && flip==0)
            {
                max = Math.Max(series, max);
                if(nums[i]==1)
                {
                    series = 0;
                    flip = k;
                    j = i;
                } 
                i++;
            }
            max = Math.Max(series, max);
            j++;
        }

        return max;
    }
}