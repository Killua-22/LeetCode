class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        long long res = 0;
        long long temp = x;
        
        while(temp) {
            
            
            
            res = res * 10 + temp % 10;
            temp /= 10;
        }
        
        return res == x;
    }
};