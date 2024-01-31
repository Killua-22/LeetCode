class Solution {
public:
    int integerBreak(int n) {
        
        int res=0;
        for(int k=2; k<=n; k++) {
            int repeatingnums = n / k;
            int addtorepeatingnums = n % k;
            int temp = 1;
            
            for(int i=0; i<k; i++) {
                if(addtorepeatingnums) {
                    temp *= (repeatingnums + 1);
                    addtorepeatingnums--;
                }else {
                    temp *= repeatingnums;
                }  
                
            }
            res = max(temp, res);
        }
        
        return res;
        
    }
};