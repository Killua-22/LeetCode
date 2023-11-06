class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] != prev){
                nums[count] = nums[i];
                count++;
                prev = nums[i];
            }
     
        }
        return count;
    }
};