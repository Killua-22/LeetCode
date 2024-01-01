class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        int cookie = 0;
        int child = 0;
        while(cookie != s.size() && child != g.size())
        {
            if(s[cookie] >= g[child])
            {
                ans++;
                cookie++;
                child++;
            }
            else
            {
                cookie++;
            }
        }
        
        return ans;
    }
};