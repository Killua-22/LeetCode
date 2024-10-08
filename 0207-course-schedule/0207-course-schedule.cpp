class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses, 0);
        int ans = 0;

        for(auto x: prerequisites) {
            adj[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++) {
            if(indegree[i] == 0) 
                q.push(i);
        }

        while(!q.empty()) {
            int t = q.front();
            ans++;
            q.pop();

            for(auto x: adj[t]) {
                indegree[x]--;
                if(indegree[x] == 0)
                    q.push(x);
            }
        }

        return ans == numCourses;

    }
};