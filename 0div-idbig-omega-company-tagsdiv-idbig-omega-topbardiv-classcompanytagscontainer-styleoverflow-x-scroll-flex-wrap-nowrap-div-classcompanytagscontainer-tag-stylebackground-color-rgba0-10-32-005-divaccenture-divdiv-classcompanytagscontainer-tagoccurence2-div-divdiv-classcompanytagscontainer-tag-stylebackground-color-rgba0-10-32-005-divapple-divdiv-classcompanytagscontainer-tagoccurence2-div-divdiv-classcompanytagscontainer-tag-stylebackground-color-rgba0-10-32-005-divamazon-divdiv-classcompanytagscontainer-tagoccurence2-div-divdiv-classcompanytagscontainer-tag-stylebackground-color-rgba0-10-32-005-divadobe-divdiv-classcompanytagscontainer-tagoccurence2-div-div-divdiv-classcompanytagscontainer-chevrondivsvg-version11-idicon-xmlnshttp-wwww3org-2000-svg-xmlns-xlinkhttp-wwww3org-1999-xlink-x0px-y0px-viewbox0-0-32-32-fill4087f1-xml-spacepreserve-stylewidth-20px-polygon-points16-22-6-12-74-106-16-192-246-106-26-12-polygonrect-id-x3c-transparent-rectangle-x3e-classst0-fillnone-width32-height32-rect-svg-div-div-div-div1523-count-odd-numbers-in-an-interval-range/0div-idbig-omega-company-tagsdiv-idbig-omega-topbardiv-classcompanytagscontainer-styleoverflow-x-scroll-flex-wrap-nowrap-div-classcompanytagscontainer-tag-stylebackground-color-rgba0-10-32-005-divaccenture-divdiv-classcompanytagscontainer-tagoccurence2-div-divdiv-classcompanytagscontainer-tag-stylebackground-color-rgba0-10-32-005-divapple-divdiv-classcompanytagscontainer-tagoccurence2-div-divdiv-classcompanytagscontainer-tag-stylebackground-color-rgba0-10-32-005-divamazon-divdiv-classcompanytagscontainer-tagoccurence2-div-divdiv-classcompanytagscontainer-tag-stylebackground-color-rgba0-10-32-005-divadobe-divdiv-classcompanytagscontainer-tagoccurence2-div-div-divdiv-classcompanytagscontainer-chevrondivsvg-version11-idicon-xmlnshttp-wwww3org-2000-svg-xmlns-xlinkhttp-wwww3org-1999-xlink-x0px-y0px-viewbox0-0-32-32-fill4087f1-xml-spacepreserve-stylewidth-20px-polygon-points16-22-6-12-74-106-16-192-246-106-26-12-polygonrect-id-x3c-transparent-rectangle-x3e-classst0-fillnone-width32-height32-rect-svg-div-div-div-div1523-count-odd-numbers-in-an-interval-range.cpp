class Solution {
public:
    int countOdds(int low, int high) {
        // int a = low;
        // int d = 2;
        low = low%2 ? low : low+1;
        high = high%2 ? high : high-1;
        return (high - low)/2 + 1; 
    }
};