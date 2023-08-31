public class Solution {
    public int TrailingZeroes(int n) {
        
        
        int zeroes = 0;
        
        int i=5;
        
        while(i<=n)
        {
            zeroes += n/i;
            i *= 5;
        }
        
        return zeroes;
        
    }
}