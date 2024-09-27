class Solution {
public:

    // int dfs(int idx, bool buying, vector<int>& prices, unordered_map<pair<int, bool>, int>& map) {
    //     if(idx >= prices.size())
    //         return 0;
        
    //     if(map.find({idx, buying}) != map.end()) 
    //         return map[{idx, buying}];
        
    //     if(buying) {
    //         int buy = dfs(idx+1, !buying, prices, map) - prices[idx];
    //         int cooldown = dfs(idx+1, buying, prices, map);
    //         map[{idx, buying}] = max(buy, cooldown);
    //     } else {
    //         int sell = dfs(idx+2, !buying, prices, map) + prices[idx];
    //         int cooldown = dfs(idx+1, buying, prices, map);
    //         map[{idx, buying}] = max(sell, cooldown);
    //     }

    //     return map[{idx, buying}];
    // }

    int dfs(int idx, bool buying, vector<int>& prices, vector<vector<int>>& memo) {
        // Base case: No more days left
        if(idx >= prices.size())
            return 0;
        
        // Map the buying state to 0 or 1 for indexing
        int state = buying ? 1 : 0;
        
        // Return memoized result if already computed
        if(memo[idx][state] != -1)
            return memo[idx][state];
        
        if(buying) {
            // Option 1: Buy the stock
            int buy = dfs(idx + 1, false, prices, memo) - prices[idx];
            // Option 2: Do not buy (cooldown)
            int cooldown = dfs(idx + 1, true, prices, memo);
            // Choose the maximum of buying or cooling down
            memo[idx][state] = max(buy, cooldown);
        } else {
            // Option 1: Sell the stock
            int sell = (idx + 1 < prices.size()) ? dfs(idx + 2, true, prices, memo) + prices[idx] : prices[idx];
            // Option 2: Do not sell (cooldown)
            int cooldown = dfs(idx + 1, false, prices, memo);
            // Choose the maximum of selling or cooling down
            memo[idx][state] = max(sell, cooldown);
        }

        return memo[idx][state];
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<int>> memo(prices.size(), vector<int>(2, -1));
        return dfs(0, true, prices, memo);
    }
};