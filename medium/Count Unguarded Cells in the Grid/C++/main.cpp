// Problem: Count Unguarded Cells in the Grid
// Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
class Solution
{
public:
    int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
    {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        for (vector<int> &wall : walls)
        {
            grid[wall[0]][wall[1]] = 2;
        }
        for (vector<int> &guard : guards)
        {
            grid[guard[0]][guard[1]] = 2;
        }
        vector<int> dr = {-1, 0, 1, 0}, dc = {0, 1, 0, -1};
        for (vector<int> &guard : guards)
        {
            int gr = guard[0], gc = guard[1];
            for (int i = 0; i < 4; i++)
            {
                int r = gr + dr[i], c = gc + dc[i];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] < 2)
                {
                    grid[r][c] = 1;
                    r += dr[i];
                    c += dc[i];
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};