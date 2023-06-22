public class Solution {
    
    public int MaxOperations(int[] nums, int k) {
        int i=0; 
        int j=nums.Length-1;
        int ops = 0;
        
        Array.Sort(nums);

        while(i<j)
        {
            int sum = nums[i]+nums[j];
            if(sum == k)
            {
                ops++;
                i++;
                j--;
            }
                
            else if(sum<k)
            {
                
                    i++;
                
                
            }else 
                    j--;
        }

        return ops;
    }
}