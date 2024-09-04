class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> freq;
        priority_queue<int, vector<int>> pq;
        queue<pair<int, int>> q;
        int time = 0;

        for(auto x: tasks) {
            freq[x]++;
        }

        for(auto x: freq) {
            pq.push(x.second);
        }

        while(!pq.empty() || !q.empty()) {

            time++;

            if(!pq.empty()) {
                int temp = pq.top();
                pq.pop();

                temp--;
                if(temp > 0) {
                    q.push({temp, time+n});
                }
            }

            if(!q.empty() && q.front().second == time)
            {
                pq.push(q.front().first);
                q.pop();
            }
            
 
            
        }

        return time;





    }
};