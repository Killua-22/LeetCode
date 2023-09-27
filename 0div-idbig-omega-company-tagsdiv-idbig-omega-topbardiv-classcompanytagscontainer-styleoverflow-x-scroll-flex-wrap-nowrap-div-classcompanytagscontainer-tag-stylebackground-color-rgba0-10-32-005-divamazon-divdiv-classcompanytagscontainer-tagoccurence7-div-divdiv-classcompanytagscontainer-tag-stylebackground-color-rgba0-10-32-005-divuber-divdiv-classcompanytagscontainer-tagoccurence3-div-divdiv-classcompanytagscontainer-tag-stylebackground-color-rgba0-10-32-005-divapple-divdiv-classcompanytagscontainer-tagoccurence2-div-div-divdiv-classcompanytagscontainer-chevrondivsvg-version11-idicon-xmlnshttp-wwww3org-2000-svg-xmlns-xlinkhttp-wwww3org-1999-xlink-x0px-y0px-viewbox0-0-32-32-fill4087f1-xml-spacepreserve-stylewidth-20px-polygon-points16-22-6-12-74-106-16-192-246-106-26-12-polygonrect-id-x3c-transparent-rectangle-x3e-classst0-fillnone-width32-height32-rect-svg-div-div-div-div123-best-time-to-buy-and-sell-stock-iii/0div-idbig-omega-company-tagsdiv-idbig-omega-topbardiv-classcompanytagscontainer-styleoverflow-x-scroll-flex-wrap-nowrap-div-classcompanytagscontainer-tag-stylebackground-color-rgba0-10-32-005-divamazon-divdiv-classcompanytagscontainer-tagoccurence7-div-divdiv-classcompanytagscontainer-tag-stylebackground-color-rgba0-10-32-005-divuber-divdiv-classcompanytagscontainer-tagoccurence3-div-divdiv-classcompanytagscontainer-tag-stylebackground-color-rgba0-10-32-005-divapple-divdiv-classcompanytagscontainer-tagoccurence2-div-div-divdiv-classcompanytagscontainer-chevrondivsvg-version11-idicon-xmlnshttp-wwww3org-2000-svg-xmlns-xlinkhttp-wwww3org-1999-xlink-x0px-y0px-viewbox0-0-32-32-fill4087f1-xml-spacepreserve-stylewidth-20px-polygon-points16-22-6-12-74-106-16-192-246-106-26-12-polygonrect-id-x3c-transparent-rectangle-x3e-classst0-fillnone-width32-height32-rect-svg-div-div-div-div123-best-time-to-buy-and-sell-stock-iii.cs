public class Solution {
    public int MaxProfit(int[] prices) {
        if(prices.Length==0)
            return 0;
        
        int fb = int.MinValue, sb = int.MinValue;
        int fs = 0, ss = 0;
        
        for(int i=0; i<prices.Length; i++)
        {
            fb = Math.Max(fb, -prices[i]);
            fs = Math.Max(fs, fb+prices[i]);
            sb = Math.Max(sb, fs-prices[i]);
            ss = Math.Max(ss, sb+prices[i]);
            
        }
        
        return ss;
        
            
    }
}