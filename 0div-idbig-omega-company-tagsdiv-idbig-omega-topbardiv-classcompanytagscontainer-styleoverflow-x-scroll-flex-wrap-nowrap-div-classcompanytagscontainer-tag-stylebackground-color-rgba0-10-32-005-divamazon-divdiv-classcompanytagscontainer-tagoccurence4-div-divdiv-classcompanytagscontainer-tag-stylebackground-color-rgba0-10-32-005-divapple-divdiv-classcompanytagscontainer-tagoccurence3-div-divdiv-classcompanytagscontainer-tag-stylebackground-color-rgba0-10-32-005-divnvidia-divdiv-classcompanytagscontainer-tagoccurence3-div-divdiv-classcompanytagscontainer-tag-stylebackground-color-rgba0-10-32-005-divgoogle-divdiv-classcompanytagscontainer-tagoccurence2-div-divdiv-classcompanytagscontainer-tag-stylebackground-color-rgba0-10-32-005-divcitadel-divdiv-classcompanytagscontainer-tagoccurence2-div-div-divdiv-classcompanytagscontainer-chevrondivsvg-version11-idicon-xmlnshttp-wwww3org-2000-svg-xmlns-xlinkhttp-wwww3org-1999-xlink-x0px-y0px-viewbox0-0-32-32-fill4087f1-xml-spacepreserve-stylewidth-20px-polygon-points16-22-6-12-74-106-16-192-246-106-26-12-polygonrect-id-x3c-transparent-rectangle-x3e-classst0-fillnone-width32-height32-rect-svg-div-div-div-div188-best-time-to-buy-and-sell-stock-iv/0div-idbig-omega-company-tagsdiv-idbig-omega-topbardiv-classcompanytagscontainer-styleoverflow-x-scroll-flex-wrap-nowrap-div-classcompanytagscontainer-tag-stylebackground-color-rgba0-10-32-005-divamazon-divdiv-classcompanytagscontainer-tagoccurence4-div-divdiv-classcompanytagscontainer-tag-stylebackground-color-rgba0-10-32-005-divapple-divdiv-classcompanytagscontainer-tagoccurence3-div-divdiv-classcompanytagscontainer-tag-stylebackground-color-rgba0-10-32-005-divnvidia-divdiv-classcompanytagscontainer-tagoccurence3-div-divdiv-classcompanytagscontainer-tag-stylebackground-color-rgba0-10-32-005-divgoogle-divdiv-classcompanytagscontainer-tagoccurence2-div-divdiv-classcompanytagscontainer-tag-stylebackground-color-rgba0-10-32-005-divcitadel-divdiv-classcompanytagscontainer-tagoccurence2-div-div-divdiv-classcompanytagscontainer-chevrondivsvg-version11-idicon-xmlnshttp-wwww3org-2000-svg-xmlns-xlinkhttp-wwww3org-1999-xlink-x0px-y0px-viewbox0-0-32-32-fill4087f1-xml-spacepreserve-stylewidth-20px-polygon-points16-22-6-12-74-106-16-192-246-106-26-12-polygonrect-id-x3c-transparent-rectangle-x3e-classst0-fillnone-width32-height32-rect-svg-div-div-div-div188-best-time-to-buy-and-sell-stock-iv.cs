public class Solution {
    public int MaxProfit(int k, int[] prices) {
        
        int[] minp = new int[k];
        int[] maxp = new int[k];
        
        for(int i=0; i<k; i++)
        {
            minp[i] = int.MaxValue;
            maxp[i] = 0;
        }
        
        for(int i=0; i<prices.Length; i++)
        {
            for(int j=0; j<k; j++)
            {
                minp[j] = Math.Min(minp[j], prices[i] - (j>0 ? maxp[j-1] : 0));
                maxp[j] = Math.Max(maxp[j], prices[i]-minp[j]);
            }
        }
        
        return maxp[k-1];
    }
}