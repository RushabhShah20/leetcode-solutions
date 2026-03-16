// Problem: Get Biggest Three Rhombus Sums in a Grid
// Link to the problem: https://leetcode.com/problems/get-biggest-three-rhombus-sums-in-a-grid/
class Solution
{
public:
    vector<int> getBiggestThree(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> x(m + 2, vector<int>(n + 2, 0)), y(m + 2, vector<int>(n + 2, 0));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                x[i][j] = x[i - 1][j - 1] + grid[i - 1][j - 1];
                y[i][j] = y[i - 1][j + 1] + grid[i - 1][j - 1];
            }
        }
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s.insert(grid[i][j]);
                if (s.size() > 3)
                {
                    s.erase(s.begin());
                }
                for (int k = 1; k < min(m, n); k++)
                {
                    if (i + 2 * k >= m || j - k < 0 || j + k >= n)
                    {
                        break;
                    }
                    const int a = y[i + k + 1][j - k + 1] - y[i + 1][j + 1];
                    const int b = x[i + 2 * k + 1][j + 1] - x[i + k + 1][j - k + 1];
                    const int c = x[i + k + 1][j + k + 1] - x[i + 1][j + 1];
                    const int d = y[i + 2 * k + 1][j + 1] - y[i + k + 1][j + k + 1];
                    s.insert(a + b + c + d + grid[i][j] - grid[i + 2 * k][j]);
                    if (s.size() > 3)
                    {
                        s.erase(s.begin());
                    }
                }
            }
        }
        const vector<int> ans(s.rbegin(), s.rend());
        return ans;
    }
};