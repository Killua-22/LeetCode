class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      
        int m = INT_MIN;
        int pref = 1;
        int suf = 1;
        
        for(int i=0; i<nums.size(); i++) {

            if(pref == 0) pref = 1;
            if(suf == 0) suf = 1;
            
            pref *= nums[i];
            suf *= nums[nums.size()-i-1];
            
            m = max(m, max(pref, suf));
        }

        
        return m;
        
    }
};