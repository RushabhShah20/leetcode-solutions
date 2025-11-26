// Problem: Paths in Matrix Whose Sum Is Divisible by K
// Link to the problem: https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/
class Solution
{
public:
    int numberOfPaths(vector<vector<int>> &grid, int k)
    {
        const int MOD = 1000000007;
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> prev(n, vector<int>(k)), curr(n, vector<int>(k));
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = (sum + grid[0][j]) % k;
            prev[j][sum] = 1;
        }
        sum = grid[0][0] % k;
        for (int i = 1; i < m; i++)
        {
            sum = (sum + grid[i][0]) % k;
            for (int j = 0; j < k; j++)
            {
                curr[0][j] = 0;
            }
            curr[0][sum] = 1;
            for (int j = 1; j < n; j++)
            {
                for (int p = 0; p < k; p++)
                {
                    curr[j][p] = 0;
                }
                int val = grid[i][j];
                for (int r = 0; r < k; r++)
                {
                    int nr = (r + val) % k;
                    curr[j][nr] = (prev[j][r] + curr[j - 1][r]) % MOD;
                }
            }
            vector<vector<int>> temp = prev;
            prev = curr;
            curr = temp;
        }
        return prev[n - 1][0];
    }
};