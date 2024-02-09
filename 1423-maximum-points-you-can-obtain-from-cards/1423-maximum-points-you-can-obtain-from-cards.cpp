class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        
        int left = 0;
        int right = n - k;
        
        int sum = 0;
        
        for(int i=right; i<n; i++) {
            sum += cardPoints[i];
        }
        
        int res = sum;
        
        while(right < n) {
            
            sum += cardPoints[left] - cardPoints[right];
            
            res = max(res, sum);
            left++;
            right++;
            
        }
        
        return res;
        
    }
};