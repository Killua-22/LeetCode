class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;
        
        for(int i=0; i<haystack.length(); i++) {
            
            if(haystack[i] == needle[start])
                start++;
            else {
                i = i - start;
                start = 0;
            }
            
            if(start == needle.length())
                return i - start + 1;
        }
        
        return -1;
    }
};