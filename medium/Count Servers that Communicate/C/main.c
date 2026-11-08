// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
int countServers(int **grid, int gridSize, int *gridColSize)
{
    const int m = gridSize, n = gridColSize[0];
    int rows[m], cols[n];
    for (int i = 0; i < m; i++)
    {
        rows[i] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        cols[j] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                if (rows[i] > 1 || cols[j] > 1)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}