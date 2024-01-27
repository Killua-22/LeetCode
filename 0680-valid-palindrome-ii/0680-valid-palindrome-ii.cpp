class Solution {
public:
    
    bool ispalindrome(string s, int start, int end) {
        
        while(start <= end) {
            if(s[start] != s[end])
                return false;
            else {
                start++;
                end--;
            }
        }
        
        return true;
        
    }
    
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        
        
        while(start <= end) {
            
           if(s[start] != s[end])
           {
               return ispalindrome(s, start, end-1) || ispalindrome(s, start+1, end);
                  
           }
            else
            {
                start++;
                end--;
            }
            
        }
        
        return true;
    }
};