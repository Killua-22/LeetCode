class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index = 1;
        int last = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != last) {
                nums[index] = nums[i];
                index++;
                last = nums[i];
            }
   
        }
        
        return index;
    }
};