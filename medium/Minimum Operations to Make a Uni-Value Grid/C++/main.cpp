// Problem: Minimum Operations to Make a Uni-Value Grid
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/
class Solution
{
public:
    int minOperations(vector<vector<int>> &grid, int x)
    {
        const int n = grid.size(), m = grid[0].size();
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a.push_back(grid[i][j]);
            }
        }
        sort(a.begin(), a.end());
        const int y = a[n * m / 2];
        int ans = 0;
        for (int i = 0; i < n * m; i++)
        {
            if (a[i] % x != y % x)
            {
                return -1;
            }
            ans += abs(a[i] - y) / x;
        }
        return ans;
    }
};