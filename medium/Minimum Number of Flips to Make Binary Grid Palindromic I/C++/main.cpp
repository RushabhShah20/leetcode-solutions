// Problem: Minimum Number of Flips to Make Binary Grid Palindromic I
// Link to the problem: https://leetcode.com/problems/minimum-number-of-flips-to-make-binary-grid-palindromic-i/
class Solution
{
public:
    int minFlips(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        int x = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (grid[i][j] != grid[i][n - 1 - j])
                {
                    x++;
                }
            }
        }
        int y = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m / 2; i++)
            {
                if (grid[i][j] != grid[m - 1 - i][j])
                {
                    y++;
                }
            }
        }
        const int ans = min(x, y);
        return ans;
    }
};