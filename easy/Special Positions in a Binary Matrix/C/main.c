// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
int numSpecial(int **mat, int matSize, int *matColSize)
{
    int m = matSize, n = matColSize[0], ans = 0;
    int rows[m], cols[n];
    memset(rows, 0, sizeof(rows));
    memset(cols, 0, sizeof(cols));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1)
            {
                ans++;
            }
        }
    }
    return ans;
}