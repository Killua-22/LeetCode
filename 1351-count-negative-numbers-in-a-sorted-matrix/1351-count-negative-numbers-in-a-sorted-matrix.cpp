class Solution {
public:
    
    int binarysearch(vector<int>& grid) {
        
        int left = 0;
        int right = grid.size()-1;

        while(left <= right) {
            
            int mid = (left + right)/2;
            
            if(grid[mid] >= 0)
                left = mid+1;
            else
                right = mid-1;
            
        }
        
        return grid.size()-1-right;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid[0].size();
        
        int cnt = 0;
        
        for(int i=0; i<grid.size(); i++) {
            int idx = binarysearch(grid[i]);

            cnt += idx;
        }
        
        return cnt;
        
    }
};