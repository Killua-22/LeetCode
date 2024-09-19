class Solution {
public:
    int numDecodings(string s) {
        if(s.empty() || s[0] == '0') return 0;

        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;  // Base case: empty string has one way to decode
        dp[1] = (s[0] != '0') ? 1 : 0;  // If the first character is not '0', there is one way to decode

        for(int i = 2; i <= n; i++) {
            int oneDigit = stoi(s.substr(i - 1, 1));  // Last one digit
            int twoDigits = stoi(s.substr(i - 2, 2));  // Last two digits

            // Check if the one-digit substring is valid (1-9)
            if(oneDigit >= 1 && oneDigit <= 9) {
                dp[i] += dp[i - 1];
            }

            // Check if the two-digit substring is valid (10-26)
            if(twoDigits >= 10 && twoDigits <= 26) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[n];
    }
};