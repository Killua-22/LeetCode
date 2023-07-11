public class Solution {
    public int FindCircleNum(int[][] isConnected) {
        
        int provinces = isConnected.Length;
        int count = 0;
        HashSet<int> h = new HashSet<int>();

        for(int i=0; i<isConnected.Length; i++)
        {
            if(!h.Contains(i))
            {
                h.Add(i);
                DFS(h, i);
                count++;
            }
                
        }
        return count;

        void DFS(HashSet<int> h, int i)
        {
            for(int j=0; j<isConnected[i].Length; j++)
            {
                if(i!=j && isConnected[i][j] == 1 && !h.Contains(j))
                {
                    h.Add(j);
                    DFS(h, j);
                }
            }
        }

    }
}