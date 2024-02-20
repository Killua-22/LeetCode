class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int res = 0;
        sort(intervals.begin(), intervals.end());
        
        int prev = 0;
        
        for(int i=1; i<intervals.size(); i++)
        {
            
            if(intervals[prev][1] > intervals[i][0]) {
                res++;
                
                if(intervals[prev][1] >= intervals[i][1])
                    prev = i;
            } else {
                prev = i;
            }
            
        }
        
        return res;
    }
};