public class Solution {

    private List<(int, bool)>[] _graph;
    private int _answer;

    public int MinReorder(int n, int[][] connections) {
        
        _graph = new List<(int, bool)>[n];

        foreach(var connection in connections)
        {
            var cityA = connection[0];
            var cityB = connection[1];

            _graph[cityA] ??= new List<(int, bool)>();
            _graph[cityB] ??= new List<(int, bool)>();

            _graph[cityA].Add((cityB, true));
            _graph[cityB].Add((cityA, false));

        }

        DFS(0, 0);

        return _answer;

    }

    public void DFS(int node, int lastNode)
    {
        foreach((int, bool) child in _graph[node])
        {
            if(child.Item1 == lastNode)
                continue;

            if(child.Item2)
                _answer++;

            DFS(child.Item1, node);
        }
    }
}