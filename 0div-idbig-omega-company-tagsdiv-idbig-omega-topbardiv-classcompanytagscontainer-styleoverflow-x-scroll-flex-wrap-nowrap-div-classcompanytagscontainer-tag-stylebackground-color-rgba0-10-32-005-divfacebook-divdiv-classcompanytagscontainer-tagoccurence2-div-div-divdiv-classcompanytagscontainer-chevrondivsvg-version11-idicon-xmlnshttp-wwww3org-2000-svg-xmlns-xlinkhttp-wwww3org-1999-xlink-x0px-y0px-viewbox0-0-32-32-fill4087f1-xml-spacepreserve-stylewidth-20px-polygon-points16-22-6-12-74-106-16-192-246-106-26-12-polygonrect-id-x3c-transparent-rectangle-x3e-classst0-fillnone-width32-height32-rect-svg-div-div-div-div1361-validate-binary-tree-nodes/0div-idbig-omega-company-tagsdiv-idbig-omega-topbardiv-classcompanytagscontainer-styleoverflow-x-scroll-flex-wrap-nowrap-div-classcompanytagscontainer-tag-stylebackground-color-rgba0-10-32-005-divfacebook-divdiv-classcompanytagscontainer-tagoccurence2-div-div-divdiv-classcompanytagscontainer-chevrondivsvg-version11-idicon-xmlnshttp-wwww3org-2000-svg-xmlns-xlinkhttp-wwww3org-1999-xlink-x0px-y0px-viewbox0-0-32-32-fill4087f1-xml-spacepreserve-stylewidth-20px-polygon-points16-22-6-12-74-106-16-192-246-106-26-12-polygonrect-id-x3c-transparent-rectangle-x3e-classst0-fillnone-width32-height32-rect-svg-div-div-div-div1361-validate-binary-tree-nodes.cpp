class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int, vector<int>> graph; 
        vector<int> freq(n, 0);
        
        for(int node = 0; node < n; node++)
        {
            int left = leftChild[node];
            int right = rightChild[node];
            if(left != -1)
            {
                graph[node].push_back(left);
                freq[left]++;
            }
            if(right!=-1)
            {
                graph[node].push_back(right);
                freq[right]++;
            }
        }
        
        vector<int> roots;
        
        for(int i=0; i<n; i++){
            if(freq[i] == 0)
                roots.push_back(i);
        }
        
        if(roots.size() != 1)
            return false;
        
        int root = roots[0];
        
        queue<int> q;
        unordered_set<int> seen;
        q.push(root); 
        seen.insert(root);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            if(graph.find(node) != graph.end())
            {
                for(int child : graph[node])
                {
                    if(seen.find(child) != seen.end())
                    {
                        return false;
                    }
                    seen.insert(child);
                    q.push(child);
                }
            }
        }
        
        return seen.size() == n;
    }
};