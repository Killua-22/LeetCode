class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int start = 0;
        
        for(int i=0; i<haystack.size(); i++) {
            
            if(haystack[i] == needle[start]) {
                start++;
            } else {
                i = i - start;
                start = 0;
            }
            
            if(start == needle.size())
                return i - start + 1;
        }
        
        return -1;
        
    }
};