public class Solution {
    public int MajorityElement(int[] nums) {
        
        Dictionary<int, int> d = new Dictionary<int, int>();
        
        for(int i=0; i<nums.Length; i++)
        {
            if(d.ContainsKey(nums[i]))
                d[nums[i]]++;
            else
                d.Add(nums[i], 1);
        }
        
        
        foreach(var item in d)
        {
            if(item.Value > nums.Length/2)
            {
               return item.Key;
            }
        }
        
        return 0;
        
    }
}