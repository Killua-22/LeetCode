public class Solution {
    public double MyPow(double x, double n) {
        
        if(n<0)
        {
            x = 1/x;
            n = -n;
        }
        
        double res = 1;
        double product = x;
        
        while(n>0)
        {
            if(n%2==1)
                res = res * product;
            
            product = product * product;
            n = Math.Floor((double)n/2);
        }
        
        return res;
    }
}