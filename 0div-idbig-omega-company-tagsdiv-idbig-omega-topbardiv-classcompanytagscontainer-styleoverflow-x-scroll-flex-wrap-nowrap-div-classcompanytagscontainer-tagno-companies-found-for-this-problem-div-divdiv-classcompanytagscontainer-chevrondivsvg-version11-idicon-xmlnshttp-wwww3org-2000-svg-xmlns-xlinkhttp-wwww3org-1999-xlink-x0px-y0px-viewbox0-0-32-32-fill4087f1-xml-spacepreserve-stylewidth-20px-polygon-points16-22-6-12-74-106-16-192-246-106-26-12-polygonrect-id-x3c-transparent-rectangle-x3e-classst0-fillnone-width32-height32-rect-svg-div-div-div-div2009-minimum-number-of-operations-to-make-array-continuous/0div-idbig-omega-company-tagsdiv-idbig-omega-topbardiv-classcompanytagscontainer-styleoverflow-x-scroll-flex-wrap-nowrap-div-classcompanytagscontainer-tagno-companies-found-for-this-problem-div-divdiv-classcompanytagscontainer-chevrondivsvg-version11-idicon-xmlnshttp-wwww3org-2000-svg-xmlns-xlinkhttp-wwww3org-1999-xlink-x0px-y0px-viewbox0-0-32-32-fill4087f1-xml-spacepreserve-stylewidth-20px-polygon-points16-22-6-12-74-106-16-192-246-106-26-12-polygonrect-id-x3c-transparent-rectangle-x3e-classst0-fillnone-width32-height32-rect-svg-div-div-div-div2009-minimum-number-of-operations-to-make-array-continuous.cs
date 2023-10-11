public class Solution {
    public int MinOperations(int[] nums) {
        int n = nums.Length;
        Array.Sort(nums);
        
        List<int> lt = new List<int>();
        
        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            lt.Add(nums[i]);
        }
        
        int len = lt.Count;
        int r = 0;
        int res = n;
        for(int l=0; l<len; l++)
        {
            while(r<len && lt[r]<lt[l]+n)
                r++;
            int window = r-l;
            
            res = Math.Min(res, n - window);    
                
        }
        return res;
    }
}