class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char, int> map;
        
        for(int i=0; i<s.size(); i++) {
            map[s[i]]++;
        }
        
        unordered_map<int, int> frq;
        
        int ans = 0;
        
        for(auto x: map) {
            int cnt = x.second;
            
            if(frq[cnt] != 0) {
                while(cnt > 0 && frq[cnt] != 0) {
                    cnt--;
                    ans++;
                }
            }
            
            frq[cnt]++;
        }
        
        return ans;
        
    }
};