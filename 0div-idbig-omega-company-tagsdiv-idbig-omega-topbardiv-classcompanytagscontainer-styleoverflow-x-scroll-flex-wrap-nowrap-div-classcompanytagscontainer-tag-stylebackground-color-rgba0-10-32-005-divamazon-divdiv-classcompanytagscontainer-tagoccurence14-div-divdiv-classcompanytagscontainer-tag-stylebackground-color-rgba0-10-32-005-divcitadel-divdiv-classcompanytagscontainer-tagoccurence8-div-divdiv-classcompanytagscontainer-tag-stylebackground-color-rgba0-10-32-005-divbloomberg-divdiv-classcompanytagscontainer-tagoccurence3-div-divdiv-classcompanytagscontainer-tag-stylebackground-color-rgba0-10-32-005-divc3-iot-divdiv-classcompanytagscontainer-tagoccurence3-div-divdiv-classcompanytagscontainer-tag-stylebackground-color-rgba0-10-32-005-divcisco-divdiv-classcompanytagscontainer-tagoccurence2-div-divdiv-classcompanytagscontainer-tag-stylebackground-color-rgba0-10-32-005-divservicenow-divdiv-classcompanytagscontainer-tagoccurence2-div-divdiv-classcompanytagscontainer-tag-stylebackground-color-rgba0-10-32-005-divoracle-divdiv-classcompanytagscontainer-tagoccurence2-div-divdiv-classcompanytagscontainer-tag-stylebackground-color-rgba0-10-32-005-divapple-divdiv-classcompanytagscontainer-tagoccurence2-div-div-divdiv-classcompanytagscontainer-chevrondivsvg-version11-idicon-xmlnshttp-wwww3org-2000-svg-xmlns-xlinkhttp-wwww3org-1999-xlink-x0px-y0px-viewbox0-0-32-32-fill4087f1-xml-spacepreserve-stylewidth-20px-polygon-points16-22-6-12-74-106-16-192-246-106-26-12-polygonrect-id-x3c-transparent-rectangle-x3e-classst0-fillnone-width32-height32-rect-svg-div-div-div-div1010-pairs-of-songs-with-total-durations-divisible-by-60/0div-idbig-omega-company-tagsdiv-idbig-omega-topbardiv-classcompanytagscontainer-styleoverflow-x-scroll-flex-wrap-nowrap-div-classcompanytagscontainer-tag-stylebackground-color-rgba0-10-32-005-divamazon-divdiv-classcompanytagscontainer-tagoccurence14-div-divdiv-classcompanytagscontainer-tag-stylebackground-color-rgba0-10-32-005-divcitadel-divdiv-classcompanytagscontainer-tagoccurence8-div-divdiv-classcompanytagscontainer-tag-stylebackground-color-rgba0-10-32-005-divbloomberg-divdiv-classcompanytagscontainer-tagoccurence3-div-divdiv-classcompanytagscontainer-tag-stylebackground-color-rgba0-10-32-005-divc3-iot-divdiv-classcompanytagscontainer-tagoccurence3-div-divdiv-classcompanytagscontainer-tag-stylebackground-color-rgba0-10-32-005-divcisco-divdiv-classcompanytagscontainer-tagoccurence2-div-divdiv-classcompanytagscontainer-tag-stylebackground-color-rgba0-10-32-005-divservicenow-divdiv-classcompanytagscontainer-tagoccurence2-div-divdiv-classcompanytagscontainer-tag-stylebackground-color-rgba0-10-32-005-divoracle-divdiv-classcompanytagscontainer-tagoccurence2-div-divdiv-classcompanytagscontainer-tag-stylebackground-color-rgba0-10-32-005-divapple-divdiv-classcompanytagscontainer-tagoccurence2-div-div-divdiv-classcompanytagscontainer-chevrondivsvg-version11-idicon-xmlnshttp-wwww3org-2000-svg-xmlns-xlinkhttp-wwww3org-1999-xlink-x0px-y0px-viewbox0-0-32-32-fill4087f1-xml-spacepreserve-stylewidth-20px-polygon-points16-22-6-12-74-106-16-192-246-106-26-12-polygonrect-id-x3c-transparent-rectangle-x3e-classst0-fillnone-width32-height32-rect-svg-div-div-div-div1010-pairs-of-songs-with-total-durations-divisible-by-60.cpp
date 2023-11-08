class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> remainders(60);
        int count = 0;
        for(auto t : time) {
            
            if(t % 60 == 0) count += remainders[0];

            else count += remainders[60 - t % 60]; 

            remainders[t % 60]++;
            
        }
         return count;
    }
};