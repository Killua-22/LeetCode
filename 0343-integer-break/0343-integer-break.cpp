class Solution {
public:
    int integerBreak(int n) {
        
        int res = 0;
        
        for(int k=2; k<=n; k++) {
            int repeatingnumbers = n / k;
            int toadd = n % k;
            
            int temp = 1;
            
            for(int i=0; i<k; i++) {
                if(toadd) {
                    temp *= (repeatingnumbers+1);
                    toadd--;
                }else {
                    temp *= repeatingnumbers;
                }
            }
            
            res = max(res, temp);
        }
        
        return res;
    }
};