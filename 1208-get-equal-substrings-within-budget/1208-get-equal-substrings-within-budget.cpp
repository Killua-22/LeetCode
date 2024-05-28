class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> cost(s.size());
        
        for(int i=0; i<s.size(); i++) {
            cost[i] = abs(t[i] - s[i]);
        }
        
        int i=0; 
        int j=0;
        int res = 0;
        int sum = 0;
        while(i<=j && j<s.size()) {
            sum += cost[j];
            
            if(sum <= maxCost) {
                res = max(j-i+1, res);    
            }
            else {
                sum -= cost[i];
                i++;
            }
            j++;
        }
        
        return res;
    }
};