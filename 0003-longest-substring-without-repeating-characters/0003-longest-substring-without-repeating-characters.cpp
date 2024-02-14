class Solution {
public:
    int lengthOfLongestSubstring(string s) {
  
        set<char> c;      
        int res = 0;        
        int l = 0;
        
        for(int r=0; r<s.size(); r++) {
            while(c.find(s[r]) != c.end()) {
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            
            res = max(res, r-l+1); 
        }

        
        return res;
        
    }
};