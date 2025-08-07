// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
class Solution
{
public:
    int minimumArea(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        int a = INT_MAX, b = INT_MAX, c = INT_MIN, d = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    a = min(a, i);
                    b = min(b, j);
                    c = max(c, i);
                    d = max(d, j);
                }
            }
        }
        return (c - a + 1) * (d - b + 1);
    }
};