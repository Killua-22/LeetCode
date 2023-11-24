class Solution {
public:
    
    void helper(int index, vector<string> &ans, string &temp, string &digits, unordered_map<char, string> m){
        
        
        
        if(index == digits.size())
        {
            ans.push_back(temp);
            return;
        }
        string str = m[digits[index]];
        for(int i=0; i<str.size(); i++){
            temp.push_back(str[i]);
            helper(index+1, ans, temp, digits, m);
            temp.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        
        
        unordered_map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        vector<string> ans;
        string temp;
        if(digits == "")
            return ans;
        helper(0, ans, temp, digits, m);
        return ans;
        
    }
};