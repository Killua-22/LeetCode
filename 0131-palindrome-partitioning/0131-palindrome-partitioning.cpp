class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> sub;
        helper(0, s, sub, res);
        return res;
    }

    void helper(int idx, const string& s, vector<string>& sub, vector<vector<string>>& res) {
        if(idx == s.size()) {
            res.push_back(sub);
            return;
        }

        for(int i = 0; idx + i < s.size(); i++) {
            string substring = s.substr(idx, i + 1);
            if(palindrome(substring)) {
                sub.push_back(substring);
                helper(idx + i + 1, s, sub, res);
                sub.pop_back();
            }
        }
    }

    bool palindrome(const string& substring) {
        int n = substring.size();
        for(int i = 0; i < n / 2; i++) {
            if(substring[i] != substring[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};