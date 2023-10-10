public class Solution {
    public int Divide(int dividend, int divisor) {
        
        if(dividend == int.MinValue && divisor == -1)
            return int.MaxValue;
        bool isPositive = (dividend<0 == divisor<0);
        long dd = Math.Abs(Convert.ToInt64(dividend));
        long dr = Math.Abs(Convert.ToInt64(divisor));
        long count = 0;
        
        while(dd >= dr)
        {
            long q = 1;
            long dr2 = dr;
            while(dd >= (dr2<<1))
            {
                dr2 = dr2<<1;
                q = q<<1;
            }
            
            count += q;
            dd = dd - dr2;
        }
        
        if(isPositive)
            return (int)(Convert.ToInt64(count));
        else
            return (int)(Convert.ToInt64(count * -1));
    }
}