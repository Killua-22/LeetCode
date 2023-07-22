public class Solution {
    public int CanCompleteCircuit(int[] gas, int[] cost) {
        if(gas.Sum() < cost.Sum()) return -1; 

        int total = 0;
        int startIndex = 0;
        for (int index = 0; index < gas.Length; index++) {
            total += (gas[index] - cost[index]);

            if(total < 0) {
                // when difference is negative, then we have to start again
                total = 0;
                startIndex = index + 1;
            }
        }

        return startIndex;
    }
}