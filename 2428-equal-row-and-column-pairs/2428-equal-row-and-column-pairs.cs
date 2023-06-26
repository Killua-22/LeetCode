public class Solution {
    public int EqualPairs(int[][] grid) {
        int ans = 0;
        for (int i = 0; i < grid.Length; i++)
            for (int j = 0; j < grid.Length; j++)
            {
                int check = 0;
                for (int k = 0; k < grid.Length; k++)
                    if (grid[i][k] == grid[k][j])
                        check++;
                if (check == grid.Length)
                    ans++;
            }
        return ans;
    }
}