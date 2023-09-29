public class Solution {
    
    public int help(int[] prices)
    {
        int max = 0;
        for(int i=1; i<prices.Length; i++)
        {
            if(prices[i] > prices[i-1])
                max+= prices[i] - prices[i-1];
        }
        
        return max;
    }
    
    public int MaxProfit(int k, int[] prices) {
        
        if(k<=0 || prices.Length == 0)
            return 0;
        
        if(k > prices.Length/2)
        {
            return help(prices);
        }
        
        
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