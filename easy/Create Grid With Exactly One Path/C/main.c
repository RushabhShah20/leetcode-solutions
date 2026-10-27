// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **createGrid(int m, int n, int *returnSize)
{
    char **ans = (char **)malloc(m * sizeof(char *));
    for (int i = 0; i < m; i++)
    {
        ans[i] = (char *)malloc((n + 1) * sizeof(char));
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = '#';
        }
        ans[i][n] = '\0';
    }
    for (int i = 0; i < n; i++)
    {
        ans[0][i] = '.';
    }
    for (int i = 0; i < m; i++)
    {
        ans[i][n - 1] = '.';
    }
    *returnSize = m;
    return ans;
}