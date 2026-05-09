// Problem: Cyclically Rotating a Grid
// Link to the problem: https://leetcode.com/problems/cyclically-rotating-a-grid/
class Solution
{
public:
    vector<vector<int>> rotateGrid(vector<vector<int>> &grid, int k)
    {
        const int m = grid.size(), n = grid[0].size(), p = min(m / 2, n / 2);
        for (int i = 0; i < p; i++)
        {
            vector<int> x, y, z;
            for (int j = i; j < m - i - 1; j++)
            {
                x.push_back(j);
                y.push_back(i);
                z.push_back(grid[j][i]);
            }
            for (int j = i; j < n - i - 1; j++)
            {
                x.push_back(m - i - 1);
                y.push_back(j);
                z.push_back(grid[m - i - 1][j]);
            }
            for (int j = m - i - 1; j > i; j--)
            {
                x.push_back(j);
                y.push_back(n - i - 1);
                z.push_back(grid[j][n - i - 1]);
            }
            for (int j = n - i - 1; j > i; j--)
            {
                x.push_back(i);
                y.push_back(j);
                z.push_back(grid[i][j]);
            }
            const int a = z.size(), b = k % a;
            for (int j = 0; j < a; j++)
            {
                grid[x[j]][y[j]] = z[(j - b + a) % a];
            }
        }
        return grid;
    }
};