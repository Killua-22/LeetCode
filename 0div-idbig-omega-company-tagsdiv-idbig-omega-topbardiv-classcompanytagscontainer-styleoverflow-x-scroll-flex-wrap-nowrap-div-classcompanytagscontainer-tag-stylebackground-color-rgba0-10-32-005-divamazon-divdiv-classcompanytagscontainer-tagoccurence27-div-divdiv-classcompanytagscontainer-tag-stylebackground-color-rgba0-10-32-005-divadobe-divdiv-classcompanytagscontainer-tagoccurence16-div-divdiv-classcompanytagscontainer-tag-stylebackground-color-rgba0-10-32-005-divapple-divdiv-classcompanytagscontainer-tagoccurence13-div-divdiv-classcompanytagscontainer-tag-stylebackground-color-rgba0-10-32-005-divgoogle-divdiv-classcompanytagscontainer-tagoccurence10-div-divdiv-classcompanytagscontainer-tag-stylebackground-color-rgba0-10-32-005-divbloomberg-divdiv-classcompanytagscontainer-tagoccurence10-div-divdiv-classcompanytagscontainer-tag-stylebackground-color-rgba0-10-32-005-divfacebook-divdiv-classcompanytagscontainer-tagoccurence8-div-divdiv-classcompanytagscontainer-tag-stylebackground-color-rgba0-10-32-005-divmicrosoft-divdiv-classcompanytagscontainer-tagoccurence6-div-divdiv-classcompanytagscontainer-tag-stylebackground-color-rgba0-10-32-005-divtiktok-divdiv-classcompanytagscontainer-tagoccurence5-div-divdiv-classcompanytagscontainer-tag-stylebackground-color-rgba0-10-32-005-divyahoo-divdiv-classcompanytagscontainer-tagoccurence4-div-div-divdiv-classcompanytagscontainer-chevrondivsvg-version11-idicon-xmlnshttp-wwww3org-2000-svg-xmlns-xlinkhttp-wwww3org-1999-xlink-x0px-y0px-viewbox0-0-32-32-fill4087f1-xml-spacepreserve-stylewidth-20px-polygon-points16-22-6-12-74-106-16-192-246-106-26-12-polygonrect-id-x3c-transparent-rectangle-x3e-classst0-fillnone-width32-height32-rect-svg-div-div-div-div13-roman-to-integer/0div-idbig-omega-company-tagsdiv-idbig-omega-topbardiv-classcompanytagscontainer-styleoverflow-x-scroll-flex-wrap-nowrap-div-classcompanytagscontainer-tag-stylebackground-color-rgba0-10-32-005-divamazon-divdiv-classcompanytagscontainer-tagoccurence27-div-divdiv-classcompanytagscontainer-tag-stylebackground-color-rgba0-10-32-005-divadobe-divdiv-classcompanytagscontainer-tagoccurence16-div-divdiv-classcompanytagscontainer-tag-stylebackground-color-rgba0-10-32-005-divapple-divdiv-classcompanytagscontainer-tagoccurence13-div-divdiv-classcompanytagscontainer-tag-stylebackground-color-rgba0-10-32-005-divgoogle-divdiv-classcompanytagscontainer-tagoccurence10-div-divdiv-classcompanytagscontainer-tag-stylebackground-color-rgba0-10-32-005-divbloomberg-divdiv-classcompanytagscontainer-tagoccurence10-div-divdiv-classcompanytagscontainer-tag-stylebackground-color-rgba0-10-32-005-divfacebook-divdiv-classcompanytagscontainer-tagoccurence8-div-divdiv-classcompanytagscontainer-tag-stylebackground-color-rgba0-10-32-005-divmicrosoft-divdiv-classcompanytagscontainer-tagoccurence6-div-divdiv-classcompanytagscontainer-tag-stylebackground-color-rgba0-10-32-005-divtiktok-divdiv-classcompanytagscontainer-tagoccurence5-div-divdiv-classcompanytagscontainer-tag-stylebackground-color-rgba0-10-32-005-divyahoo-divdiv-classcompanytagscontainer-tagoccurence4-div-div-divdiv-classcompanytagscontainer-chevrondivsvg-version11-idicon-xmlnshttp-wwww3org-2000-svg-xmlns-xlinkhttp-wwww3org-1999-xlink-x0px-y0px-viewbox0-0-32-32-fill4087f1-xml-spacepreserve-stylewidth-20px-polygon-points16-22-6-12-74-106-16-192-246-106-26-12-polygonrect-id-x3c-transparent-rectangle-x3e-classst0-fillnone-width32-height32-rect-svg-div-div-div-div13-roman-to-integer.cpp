class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},           
        };
        
//         int n = s.size();
//         int ans = 0;
//         for(int i=n-1; i>0; i--)
//         {
//             if(m[s[i-1]] < m[s[i]])
//             {
//                 ans += m[s[i]] - m[s[i-1]];
//                 i--;
//             }
                
//             else
//                 ans += m[s[i]];
//         }
//         ans += m[s[1]] > m[s[0]] ? 0 : m[s[0]];
//         return ans;
        int result = 0;

        for(int i = 0; i < s.size() - 1; i++)
        {
            if(m[s[i]] < m[s[i + 1]])
                result -= m[s[i]];
            else
                result += m[s[i]];
        }

        return result + m[s[s.size() - 1]];
    }
};