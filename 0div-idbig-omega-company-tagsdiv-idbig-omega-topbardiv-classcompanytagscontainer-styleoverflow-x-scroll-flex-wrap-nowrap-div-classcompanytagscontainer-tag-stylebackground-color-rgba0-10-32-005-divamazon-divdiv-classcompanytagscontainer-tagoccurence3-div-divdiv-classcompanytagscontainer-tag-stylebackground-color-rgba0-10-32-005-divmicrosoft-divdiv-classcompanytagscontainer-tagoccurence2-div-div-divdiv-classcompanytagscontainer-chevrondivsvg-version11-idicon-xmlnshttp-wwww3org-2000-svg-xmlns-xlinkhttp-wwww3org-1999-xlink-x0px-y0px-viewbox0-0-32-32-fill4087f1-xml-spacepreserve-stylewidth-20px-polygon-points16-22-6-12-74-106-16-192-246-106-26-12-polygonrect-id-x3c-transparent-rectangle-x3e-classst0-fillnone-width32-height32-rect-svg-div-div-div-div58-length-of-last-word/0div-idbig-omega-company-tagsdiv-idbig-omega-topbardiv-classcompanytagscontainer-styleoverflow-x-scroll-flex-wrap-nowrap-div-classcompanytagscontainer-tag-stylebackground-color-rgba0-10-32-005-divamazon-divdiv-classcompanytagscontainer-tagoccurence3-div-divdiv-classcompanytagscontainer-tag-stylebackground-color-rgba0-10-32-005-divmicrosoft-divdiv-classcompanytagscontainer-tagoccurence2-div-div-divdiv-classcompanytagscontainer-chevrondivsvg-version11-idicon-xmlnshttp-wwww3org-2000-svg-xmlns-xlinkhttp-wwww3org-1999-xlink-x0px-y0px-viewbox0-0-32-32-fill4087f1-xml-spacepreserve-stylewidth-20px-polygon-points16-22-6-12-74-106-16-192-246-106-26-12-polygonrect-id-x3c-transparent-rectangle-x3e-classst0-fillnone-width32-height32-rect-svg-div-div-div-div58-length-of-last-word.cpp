class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        if(n==0)
            return 1;
        
        while(n>=0 && s[n] == ' ')
        {
            n--;
        }
        
        int size = 0;
        
        while(n>=0 && s[n] != ' ')
        {
            size++;
            n--;
        }
        
        return size;
        
    }
};