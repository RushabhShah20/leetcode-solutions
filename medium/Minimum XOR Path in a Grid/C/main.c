// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
int minCost(int **grid, int gridSize, int *gridColSize)
{
    const int m = gridSize, n = gridColSize[0];
    int *dp = (int *)calloc((size_t)m * n * 1024, sizeof(int));
    dp[(0 * n + 0) * 1024 + grid[0][0]] = 1;
    for (int i = 1; i < m; i++)
    {
        for (int k = 0; k < 1024; k++)
        {
            if (dp[((i - 1) * n + 0) * 1024 + k] == 1)
            {
                dp[(i * n + 0) * 1024 + (k ^ grid[i][0])] = 1;
            }
        }
    }
    for (int j = 1; j < n; j++)
    {
        for (int k = 0; k < 1024; k++)
        {
            if (dp[(0 * n + (j - 1)) * 1024 + k] == 1)
            {
                dp[(0 * n + j) * 1024 + (k ^ grid[0][j])] = 1;
            }
        }
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < 1024; k++)
            {
                if (dp[((i - 1) * n + j) * 1024 + k] == 1 ||
                    dp[(i * n + (j - 1)) * 1024 + k] == 1)
                {
                    dp[(i * n + j) * 1024 + (k ^ grid[i][j])] = 1;
                }
            }
        }
    }
    int ans = 0;
    for (int k = 0; k < 1024; k++)
    {
        if (dp[((m - 1) * n + (n - 1)) * 1024 + k] == 1)
        {
            ans = k;
            break;
        }
    }
    free(dp);
    return ans;
}