public class Solution {
    public int MaxProduct(int[] nums) {
        int n = nums.Length;
        if(n==1)
            return nums[0];
        int max = int.MinValue;
        
//         for(int i=0; i<n; i++)
//         {
//             int[] dp = new int[n];
//             for(int j=i; j<n; j++)
//             {
//                 if(i==j)
//                     dp[j] = nums[i];
//                 else
//                 {
//                     dp[j] = nums[j] * dp[j-1];            
                    
//                 }
//                 max = Math.Max(max, dp[j]);
//             }
//         }
        
//         return max;
        
        int maxProduct = 1;
        int minProduct = 1;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] < 0)
            {
                swap(ref maxProduct, ref minProduct);
//                 int temp = maxProduct;
//                 maxProduct = minProduct;
//                 minProduct = temp;
                
            }
            maxProduct = Math.Max(maxProduct*nums[i], nums[i]);
            minProduct = Math.Min(minProduct*nums[i], nums[i]);
            max = Math.Max(max, maxProduct);
        }
        
        return max;
    }
    
    public void swap(ref int a, ref int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}