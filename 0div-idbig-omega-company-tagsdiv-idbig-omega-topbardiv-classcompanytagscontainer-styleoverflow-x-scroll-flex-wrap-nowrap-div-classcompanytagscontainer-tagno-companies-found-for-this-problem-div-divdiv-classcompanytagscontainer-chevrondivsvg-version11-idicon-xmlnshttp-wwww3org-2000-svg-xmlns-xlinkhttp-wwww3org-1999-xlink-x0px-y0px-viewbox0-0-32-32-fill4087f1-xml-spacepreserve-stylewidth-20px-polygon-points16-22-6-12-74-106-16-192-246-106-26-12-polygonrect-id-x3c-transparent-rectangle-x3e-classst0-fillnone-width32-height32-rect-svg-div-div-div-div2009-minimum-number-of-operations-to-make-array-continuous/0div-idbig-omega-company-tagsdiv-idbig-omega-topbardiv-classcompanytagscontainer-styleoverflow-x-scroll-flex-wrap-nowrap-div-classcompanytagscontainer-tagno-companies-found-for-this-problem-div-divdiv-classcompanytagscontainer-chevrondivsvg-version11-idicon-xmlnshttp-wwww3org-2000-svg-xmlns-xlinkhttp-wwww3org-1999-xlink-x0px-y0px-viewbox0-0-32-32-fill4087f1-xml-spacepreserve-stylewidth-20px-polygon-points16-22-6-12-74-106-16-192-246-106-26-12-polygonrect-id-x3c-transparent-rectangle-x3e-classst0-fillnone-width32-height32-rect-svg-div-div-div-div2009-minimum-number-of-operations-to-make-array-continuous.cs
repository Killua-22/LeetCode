public class Solution {

    
    public int MinOperations(int[] nums) {
        int n = nums.Length;
        Array.Sort(nums);
        
        List<int> list = new List<int>();
        
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            list.Add(nums[i]);
        }
        int len = list.Count;
        int res = n;
        int r = 0;
        for(int l=0; l<len; l++)
        {
            
            while(r<len && list[r] < list[l] + n)
                r += 1;
            int window = r - l;
            res = Math.Min(res, n - window);
        }
        
        return res;
    }
}