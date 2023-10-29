class Solution {
public:

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n), back(n);
        vector<int> v(n, 0);
        
        v[0] = 1;
        for(auto a : connections)
        {
            adj[a[0]].push_back(a[1]);
            back[a[1]].push_back(a[0]);
        }
        
        int answer = 0;
        queue<int>q;
        q.push(0);
        
        while(!q.empty())
        {
            int a = q.front();
            q.pop();
            v[a] = 1;
            for(int no: adj[a])
            {
                if(!v[no])
                {
                    answer++;
                    q.push(no);
                }
            }
            for(int no: back[a])
            {
                if(!v[no])
                {
                    q.push(no);
                }
            }
        }
        return answer;
    }
};