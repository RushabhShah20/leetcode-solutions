// Problem: Count Submatrices with Top-Left Element and Sum Less Than k
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
int countSubmatrices(int **grid, int gridSize, int *gridColSize, int k)
{
    const int m = gridSize, n = gridColSize[0];
    int **prefix = (int **)malloc((m + 1) * sizeof(int *));
    for (int i = 0; i <= m; i++)
    {
        prefix[i] = (int *)calloc(n + 1, sizeof(int));
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + grid[i - 1][j - 1];
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (prefix[i][j] <= k)
            {
                ans++;
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        free(prefix[i]);
    }
    free(prefix);
    return ans;
}