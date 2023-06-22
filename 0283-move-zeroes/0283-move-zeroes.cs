public class Solution {
    public void MoveZeroes(int[] nums) {
        int count = 0;
        int length = nums.Length;


        for(int i=0; i<length; i++)
        {
            if(nums[i]!=0)
            {
                nums[count] = nums[i];
                count++;
            }                          
        }

        for(int j = count; j<length; j++)
        {
            nums[j] = 0;
        }
    }
}