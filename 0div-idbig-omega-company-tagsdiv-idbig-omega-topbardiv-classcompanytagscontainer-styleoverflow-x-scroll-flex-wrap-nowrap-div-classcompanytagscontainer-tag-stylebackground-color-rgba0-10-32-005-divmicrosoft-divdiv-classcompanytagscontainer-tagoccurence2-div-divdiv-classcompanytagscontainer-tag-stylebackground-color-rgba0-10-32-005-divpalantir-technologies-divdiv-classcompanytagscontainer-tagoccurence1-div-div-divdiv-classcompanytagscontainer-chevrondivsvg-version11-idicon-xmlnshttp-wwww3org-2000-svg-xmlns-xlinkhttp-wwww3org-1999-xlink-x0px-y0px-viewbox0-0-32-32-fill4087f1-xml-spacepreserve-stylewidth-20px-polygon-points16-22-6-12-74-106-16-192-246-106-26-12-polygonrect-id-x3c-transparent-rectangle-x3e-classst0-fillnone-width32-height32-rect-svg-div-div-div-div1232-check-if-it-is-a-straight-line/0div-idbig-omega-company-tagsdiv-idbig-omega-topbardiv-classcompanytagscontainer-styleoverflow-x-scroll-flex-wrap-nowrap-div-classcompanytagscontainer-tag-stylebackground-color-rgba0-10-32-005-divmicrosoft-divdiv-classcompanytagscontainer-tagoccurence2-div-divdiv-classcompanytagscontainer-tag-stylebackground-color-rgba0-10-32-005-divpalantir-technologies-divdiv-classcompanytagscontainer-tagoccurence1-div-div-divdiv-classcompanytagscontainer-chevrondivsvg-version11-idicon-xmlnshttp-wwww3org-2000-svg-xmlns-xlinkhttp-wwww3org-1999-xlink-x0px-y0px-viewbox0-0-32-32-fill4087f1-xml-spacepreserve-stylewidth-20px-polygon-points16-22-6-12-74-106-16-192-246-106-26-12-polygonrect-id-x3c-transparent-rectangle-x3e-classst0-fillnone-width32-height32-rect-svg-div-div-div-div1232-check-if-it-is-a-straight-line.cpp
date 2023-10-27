class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates[0][0] - coordinates[1][0];
        int y = coordinates[0][1] - coordinates[1][1];
        
        for(int i=1; i<coordinates.size(); i++)
        {
            if(x * (coordinates[i][1] - coordinates[0][1]) != y * (coordinates[i][0] - coordinates[0][0]))
                return false;
        }
        return true;
    }
};