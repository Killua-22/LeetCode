class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        vector<vector<int>> temp = {p1, p2, p3, p4};
        unordered_map<int, int> cnt;
        int side2 = INT_MAX;
        
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<4; j++) {
                int x = temp[i][0] - temp[j][0];
                int y = temp[i][1] - temp[j][1];
                
                int var = x * x + y * y;
                
                side2 = min(side2, var);
                
                cnt[var]++;
                
            }
        }
        
        
        return cnt[side2] == 4 && cnt[side2 * 2] == 2;
        
        
        
    }
};