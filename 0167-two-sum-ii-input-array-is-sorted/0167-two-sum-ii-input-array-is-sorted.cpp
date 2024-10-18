class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0;
        int second = numbers.size()-1;

        while(first < second) {
            int temp = numbers[first] + numbers[second];
            if(temp == target)  
                return {first+1, second+1};
            else if(temp > target)
                second--;
            else 
                first++;
        }

        return {-1, -1};
    }
};