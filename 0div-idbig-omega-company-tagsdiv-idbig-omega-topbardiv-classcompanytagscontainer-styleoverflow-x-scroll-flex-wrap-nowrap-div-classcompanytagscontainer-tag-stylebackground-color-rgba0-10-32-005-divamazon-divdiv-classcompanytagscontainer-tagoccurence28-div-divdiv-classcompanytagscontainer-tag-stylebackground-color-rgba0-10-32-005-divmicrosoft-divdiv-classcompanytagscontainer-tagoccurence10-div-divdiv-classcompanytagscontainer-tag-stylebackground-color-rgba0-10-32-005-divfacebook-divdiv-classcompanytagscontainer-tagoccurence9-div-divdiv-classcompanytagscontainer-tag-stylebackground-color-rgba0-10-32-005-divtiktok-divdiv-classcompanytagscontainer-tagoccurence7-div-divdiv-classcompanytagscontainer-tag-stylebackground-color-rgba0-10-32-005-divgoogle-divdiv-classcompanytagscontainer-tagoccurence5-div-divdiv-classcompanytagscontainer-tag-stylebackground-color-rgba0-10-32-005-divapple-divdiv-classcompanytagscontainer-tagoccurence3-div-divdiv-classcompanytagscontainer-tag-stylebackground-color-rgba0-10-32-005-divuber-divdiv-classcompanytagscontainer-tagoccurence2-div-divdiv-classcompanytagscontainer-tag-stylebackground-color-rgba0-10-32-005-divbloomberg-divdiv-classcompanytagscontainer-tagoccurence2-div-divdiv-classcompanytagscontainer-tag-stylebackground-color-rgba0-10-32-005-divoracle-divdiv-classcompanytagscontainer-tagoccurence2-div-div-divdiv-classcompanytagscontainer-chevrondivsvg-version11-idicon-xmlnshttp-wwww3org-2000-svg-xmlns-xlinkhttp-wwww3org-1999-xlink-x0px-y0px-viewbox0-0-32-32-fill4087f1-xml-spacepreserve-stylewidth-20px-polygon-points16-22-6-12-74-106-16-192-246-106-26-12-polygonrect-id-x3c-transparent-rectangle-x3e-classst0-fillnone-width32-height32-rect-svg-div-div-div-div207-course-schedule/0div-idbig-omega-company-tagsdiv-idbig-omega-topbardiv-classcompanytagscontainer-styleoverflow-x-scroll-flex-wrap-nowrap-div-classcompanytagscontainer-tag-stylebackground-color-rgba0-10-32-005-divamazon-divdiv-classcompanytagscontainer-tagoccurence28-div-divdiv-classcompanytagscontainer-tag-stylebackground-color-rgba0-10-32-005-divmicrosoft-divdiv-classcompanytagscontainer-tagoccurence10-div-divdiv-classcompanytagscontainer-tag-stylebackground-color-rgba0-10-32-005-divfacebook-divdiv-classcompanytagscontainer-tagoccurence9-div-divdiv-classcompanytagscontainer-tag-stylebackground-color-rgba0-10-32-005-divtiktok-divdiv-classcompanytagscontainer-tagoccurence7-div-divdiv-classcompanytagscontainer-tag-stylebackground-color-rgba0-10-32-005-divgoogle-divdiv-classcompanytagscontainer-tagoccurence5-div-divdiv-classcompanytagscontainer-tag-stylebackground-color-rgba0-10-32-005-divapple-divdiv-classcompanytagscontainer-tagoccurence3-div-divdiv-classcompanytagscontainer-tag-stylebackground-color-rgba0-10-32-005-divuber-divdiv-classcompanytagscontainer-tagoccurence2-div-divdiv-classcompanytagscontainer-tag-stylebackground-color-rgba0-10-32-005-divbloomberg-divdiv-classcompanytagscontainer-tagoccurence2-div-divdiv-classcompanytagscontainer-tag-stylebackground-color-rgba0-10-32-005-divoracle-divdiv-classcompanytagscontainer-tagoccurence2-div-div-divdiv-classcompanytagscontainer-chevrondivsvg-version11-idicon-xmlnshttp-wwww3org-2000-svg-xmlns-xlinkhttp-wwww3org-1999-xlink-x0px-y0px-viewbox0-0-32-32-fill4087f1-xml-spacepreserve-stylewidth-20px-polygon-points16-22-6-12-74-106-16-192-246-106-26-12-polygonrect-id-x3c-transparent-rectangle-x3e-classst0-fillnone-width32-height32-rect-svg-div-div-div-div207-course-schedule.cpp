class Solution {
public:
    bool dfs(vector<int> adj[],int node,vector<int> &visited,vector<int> &pathVisited){
        visited[node]=1;
        pathVisited[node]=1;
        for(auto adjNode:adj[node]){
            if(!visited[adjNode]){
                if(dfs(adj,adjNode,visited,pathVisited)){
                    return true;
                }
            }
            else if(pathVisited[adjNode]){
                return true;
            }
        }
        pathVisited[node]=0;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> visited(numCourses,0),pathVisited(numCourses,0);
        for(auto pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(dfs(adj,i,visited,pathVisited)){ // cycle is there
                    return false;
                }
            }
        }
        return true;
    }
};