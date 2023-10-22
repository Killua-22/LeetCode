class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        
        int len = min(word1.size(), word2.size());
        
        for(int i=0; i<len; i++)
        {
            res += word1[i];
            res += word2[i];
        }
        
        res += word1.substr(len, word1.size() - len);
        res += word2.substr(len, word2.size()- len);
        
        return res;
    }
};