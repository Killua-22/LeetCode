class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(!pq.empty()) {
            
            if(pq.size() == 1)
                break;

            if(pq.size() >= 2) {
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                pq.push(abs(x-y));
            }

        }

        return pq.top();
    }
};