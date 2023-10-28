class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            x = 1/x;
            
        }
        long num = labs(n);
        double res = 1;
        double power = x;
        
        while(num!=0)
        {
            if(num%2 == 1)
            {
                res = res * power;
            }
            power *= power;
            num = floor((double)num/2);
        }
        
        return res;
    }
};