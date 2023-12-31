public class Solution {
    public bool Search(int[] nums, int target) {
        int low = 0; 
        int high = nums.Length-1;
        
        while(low<=high)
        {
            
            while(low<high && nums[low] == nums[low+1])
                low++;
            while(low<high && nums[high] == nums[high-1])
                high--;
            
            int mid = low + (high-low) / 2;
            
            if(nums[mid] == target)
                return true;
            
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && nums[mid] > target)
                {
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            else
            {
                if(nums[high] >= target && nums[mid] < target)
                {
                    low = mid+1;
                }
                else
                    high = mid-1;
            }
        }
        
        return false;
    }
}