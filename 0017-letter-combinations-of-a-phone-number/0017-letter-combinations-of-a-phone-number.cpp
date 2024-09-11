class Solution {
public:

    unordered_map<char, string> m; 
    
        

    vector<string> letterCombinations(string digits) {

        vector<string> res;
        string temp;

        if(digits == "")
            return res;

        m['2']= "abc";
        m['3']= "def"; 
        m['4']= "ghi"; 
        m['5']= "jkl";
        m['6']= "mno";
        m['7']= "pqrs"; 
        m['8']= "tuv";
        m['9']= "wxyz";

        helper(0, temp, digits, res);
        return res;

    }

    void helper(int idx, string& temp, string digits, vector<string>& res) {
        if(idx == digits.size()) 
        {
            res.push_back(temp);
            return;
        }

        string s = m[digits[idx]];
        for(int i=0; i<s.size(); i++) {
            temp.push_back(s[i]);
            helper(idx+1, temp, digits, res);
            temp.pop_back();
        }
    }
};