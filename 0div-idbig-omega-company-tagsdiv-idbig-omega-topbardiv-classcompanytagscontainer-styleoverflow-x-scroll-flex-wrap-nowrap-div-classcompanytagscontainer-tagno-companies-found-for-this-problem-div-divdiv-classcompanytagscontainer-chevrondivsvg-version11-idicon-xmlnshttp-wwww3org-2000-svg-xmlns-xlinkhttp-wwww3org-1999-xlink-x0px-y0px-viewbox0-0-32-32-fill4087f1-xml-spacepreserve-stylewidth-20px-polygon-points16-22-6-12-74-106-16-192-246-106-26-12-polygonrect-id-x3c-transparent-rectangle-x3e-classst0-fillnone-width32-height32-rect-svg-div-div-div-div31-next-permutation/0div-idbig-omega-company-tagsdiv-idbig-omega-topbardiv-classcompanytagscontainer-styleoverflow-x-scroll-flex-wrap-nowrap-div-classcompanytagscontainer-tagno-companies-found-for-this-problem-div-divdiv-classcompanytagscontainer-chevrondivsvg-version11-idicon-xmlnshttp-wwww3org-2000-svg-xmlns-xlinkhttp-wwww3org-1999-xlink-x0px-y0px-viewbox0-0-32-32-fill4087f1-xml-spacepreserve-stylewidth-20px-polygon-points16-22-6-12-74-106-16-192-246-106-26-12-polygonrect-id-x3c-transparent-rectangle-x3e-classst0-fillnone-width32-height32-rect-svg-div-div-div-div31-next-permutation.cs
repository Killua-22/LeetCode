public class Solution {
    public void NextPermutation(int[] nums) {
        int n = nums.Length;
        int x = -1;
        int y = -1;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                x = i;
                break;
            }
        }
        
        if(x == -1)
        {
            reverse(nums, 0, n);
            return;
        }
        
        for(int i=n-1; i>=0; i--)
        {
            if(nums[i] > nums[x])
            {
                y = i;
                break;
            }
        }
        
        swap(nums, x, y);
        reverse(nums, x+1, n);
    
    }
    
    public void reverse(int[] nums, int start, int n)
    {
        int i = start; 
        int j = n-1;
        while(i<j)
        {
            swap(nums, i, j);
            i++;
            j--;
                
        }
    }
    
    public void swap(int[] nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
}