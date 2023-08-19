public class Solution {
    public int Trap(int[] height) {
        int length = height.Length;
        int res = 0;
        int[] left = new int[length];
        int[] right = new int[length];
        left[0] = height[0];
        right[length-1] = height[length-1];
        for(int i=1; i<length; i++)
        {
            left[i] = Math.Max(left[i-1], height[i]);
            right[length-i-1] = Math.Max(right[length-i], height[length-i-1]);
        }
        
        for(int i=0; i<length; i++)
        {
            res += Math.Min(left[i], right[i]) - height[i];
        }
        
        return res;
    }
}