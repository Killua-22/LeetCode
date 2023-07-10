public class Solution {
    public bool CanVisitAllRooms(IList<IList<int>> rooms) {
        
        var visited = new bool[rooms.Count];
        DFS(room: 0);
        return visited.All(v => v);

        void DFS(int room){
            if(visited[room]) return;

            visited[room] = true;

            foreach(int i in rooms[room])
                DFS(i);
        }
    }
}