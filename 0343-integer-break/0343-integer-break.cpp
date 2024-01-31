class Solution {
public:
    int integerBreak(int n) {
        
        int  res = 0;
        for(int k=2; k<=n; k++) {
            int x = n / k;
            int y = n % k;
            
            int temp = 1;
            for(int i=0; i<k; i++) {
                if(y){
                    temp *= x+1;
                    y--;
                }
                else {
                    temp *= x;
                }
            }
            
            res = max(res, temp);
        }
        
        return res;
            
    }
};