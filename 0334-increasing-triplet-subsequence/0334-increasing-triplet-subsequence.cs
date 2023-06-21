public class Solution {
    public bool IncreasingTriplet(int[] nums) {
        
        int n = nums.Length;
        int left = int.MaxValue;
        int middle = int.MaxValue;

        for(int i=0; i<n; i++)
        {
            int right = nums[i];
            if(right<left)
                left=right;
            else if(right<middle && right>left)
                middle = right;
            else if(left<right && middle<right)
                return true;
        }
        return false;


    }
}