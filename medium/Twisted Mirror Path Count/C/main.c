// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
int uniquePaths(int **grid, int gridSize, int *gridColSize)
{
    const int k = 1000000007, n = gridSize, m = gridColSize[0];
    int (*a)[2] = calloc(m, sizeof(*a));
    a[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0)
            {
                if (grid[i - 1][j] == 0)
                {
                    a[j][0] = (a[j][0] + a[j][1]) % k;
                }
                else
                {
                    a[j][0] = a[j][1];
                }
            }
            if (j > 0)
            {
                if (grid[i][j - 1] == 0)
                {
                    a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k;
                }
                else
                {
                    a[j][1] = a[j - 1][0];
                }
            }
        }
    }
    const int ans = (a[m - 1][0] + a[m - 1][1]) % k;
    free(a);
    return ans;
}