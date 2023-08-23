public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        
        Dictionary<int, int> hash = new Dictionary<int, int>();
        
        for(int i=0; i<nums.Length; i++)
        {
            if(hash.ContainsKey(nums[i]))
            {
                if(Math.Abs(i - hash[nums[i]]) <= k)
                    return true;
            }
            hash[nums[i]] = i;
        }
        
        
        return false;
        
    }
}