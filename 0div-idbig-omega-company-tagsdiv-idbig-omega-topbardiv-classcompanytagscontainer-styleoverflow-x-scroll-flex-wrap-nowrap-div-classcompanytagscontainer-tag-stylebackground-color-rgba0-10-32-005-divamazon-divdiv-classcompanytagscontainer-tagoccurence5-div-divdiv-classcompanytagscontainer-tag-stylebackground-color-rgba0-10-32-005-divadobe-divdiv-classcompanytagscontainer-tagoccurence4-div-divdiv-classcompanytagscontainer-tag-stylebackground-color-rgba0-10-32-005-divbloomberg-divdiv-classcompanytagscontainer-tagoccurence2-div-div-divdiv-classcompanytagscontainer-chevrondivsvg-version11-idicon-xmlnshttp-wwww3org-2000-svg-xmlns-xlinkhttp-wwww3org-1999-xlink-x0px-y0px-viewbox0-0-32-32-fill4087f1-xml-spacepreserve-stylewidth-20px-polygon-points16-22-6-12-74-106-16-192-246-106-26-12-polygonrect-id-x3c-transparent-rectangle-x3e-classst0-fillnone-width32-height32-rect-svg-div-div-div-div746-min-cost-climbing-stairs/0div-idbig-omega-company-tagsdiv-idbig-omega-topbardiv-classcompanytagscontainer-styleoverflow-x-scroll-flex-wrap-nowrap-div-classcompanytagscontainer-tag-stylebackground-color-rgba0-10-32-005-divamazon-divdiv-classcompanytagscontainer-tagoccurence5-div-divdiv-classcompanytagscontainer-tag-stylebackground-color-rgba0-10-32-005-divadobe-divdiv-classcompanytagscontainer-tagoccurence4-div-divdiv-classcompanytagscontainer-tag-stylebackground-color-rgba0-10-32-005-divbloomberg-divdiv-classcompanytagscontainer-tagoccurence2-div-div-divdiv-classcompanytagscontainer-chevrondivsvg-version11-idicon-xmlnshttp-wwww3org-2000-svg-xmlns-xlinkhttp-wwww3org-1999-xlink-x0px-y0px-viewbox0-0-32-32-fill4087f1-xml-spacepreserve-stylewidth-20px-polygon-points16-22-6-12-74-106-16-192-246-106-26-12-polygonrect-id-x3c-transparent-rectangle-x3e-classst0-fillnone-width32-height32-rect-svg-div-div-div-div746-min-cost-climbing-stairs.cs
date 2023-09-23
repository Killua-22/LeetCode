public class Solution {
    public int MinCostClimbingStairs(int[] cost) {
        int len = cost.Length;
        
        for(int i=2; i<len; i++)
        {
            cost[i] += Math.Min(cost[i-1], cost[i-2]);
        }
        
        return Math.Min(cost[len-1], cost[len-2]);
        
    }
}