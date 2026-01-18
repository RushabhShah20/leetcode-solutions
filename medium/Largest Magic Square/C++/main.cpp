// Problem: Largest Magic Square
// Link to the problem: https://leetcode.com/problems/largest-magic-square/
class Solution
{
public:
    int largestMagicSquare(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> rowSum(m, vector<int>(n + 1, 0)), colSum(m + 1, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                rowSum[i][j + 1] = rowSum[i][j] + grid[i][j];
                colSum[i + 1][j] = colSum[i][j] + grid[i][j];
            }
        }
        for (int e = min(m, n); e > 1; e--)
        {
            for (int i = 0; i <= m - e; i++)
            {
                for (int j = 0; j <= n - e; j++)
                {
                    int d1 = 0, d2 = 0;
                    for (int k = 0; k < e; k++)
                    {
                        d1 += (grid[i + k][j + k]);
                        d2 += (grid[i + k][j + e - 1 - k]);
                    }
                    if (d1 != d2)
                    {
                        continue;
                    }
                    bool x = true;
                    for (int k = 0; k < e; k++)
                    {
                        int r = rowSum[i + k][j + e] - rowSum[i + k][j], c = colSum[i + e][j + k] - colSum[i][j + k];
                        if (r != d1 || c != d1)
                        {
                            x = false;
                            break;
                        }
                    }
                    if (x == true)
                    {
                        return e;
                    }
                }
            }
        }
        return 1;
    }
};