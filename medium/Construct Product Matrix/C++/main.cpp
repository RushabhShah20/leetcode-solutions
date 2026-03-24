// Problem: Construct Product Matrix
// Link to the problem: https://leetcode.com/problems/construct-product-matrix/
class Solution
{
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>> &grid)
    {
        const int n = grid.size(), m = grid[0].size(), mod = 12345;
        vector<vector<int>> ans(n, vector<int>(m));
        long long x = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                ans[i][j] = x;
                x = (x * grid[i][j]) % mod;
            }
        }
        long long y = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = (ans[i][j] * y) % mod;
                y = (y * grid[i][j]) % mod;
            }
        }
        return ans;
    }
};