public class Solution {
    public int Divide(int dividend, int divisor) {
        
        if (dividend == int.MinValue && divisor == -1)
                return int.MaxValue;
        bool b = (dividend < 0 == divisor < 0);        
        long divd = Math.Abs(Convert.ToInt64(dividend));
        long divs = Math.Abs(Convert.ToInt64(divisor));
        long count = 0;
        while (divd >= divs)
        {
            long q = 1;
            long divs2 = divs;
            while (divd >= (divs2 << 1))
            {
                divs2 = divs2 << 1;
                q = q << 1;
            }
            count += q;
            divd -= divs2;
        }
        if (!b)
        {
            return (int)Convert.ToInt64(count * -1);
        }
        else
        {
            return (int)Convert.ToInt64(count);
        }
        
    }
}