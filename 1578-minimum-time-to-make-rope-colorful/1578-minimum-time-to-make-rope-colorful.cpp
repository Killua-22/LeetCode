class Solution {
public:
    
//     void swap(int i, int j, vector<int>& neededTime) {
        
//         int temp = neededTime[i];
//         neededTime[i] = neededTime[j];
//         neededTime[j] = temp;
        
//     }
    
    int minCost(string colors, vector<int>& neededTime) {
        
        int cost = 0;
        
        for(int i=1; i<colors.size(); i++) {
            
            if(colors[i] == colors[i-1])
            {
                if(neededTime[i] < neededTime[i-1])
                {
                    cost += neededTime[i];
                    neededTime[i] = neededTime[i-1];
                    
                }else 
                {
                    cost += neededTime[i-1];
                }
            }
            
        }
        return cost;
        
        
    }
};