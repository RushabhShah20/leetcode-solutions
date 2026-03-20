// Problem: Minimum Absolute Difference in Sliding Submatrix
// Link to the problem: https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/
class Solution
{
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>> &grid, int k)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1, 0));
        for (int i = 0; i < m - k + 1; i++)
        {
            for (int j = 0; j < n - k + 1; j++)
            {
                vector<int> z;
                for (int x = i; x < i + k; x++)
                {
                    for (int y = j; y < j + k; y++)
                    {
                        z.push_back(grid[x][y]);
                    }
                }
                sort(z.begin(), z.end());
                int a = INT_MAX;
                for (int p = 1; p < z.size(); p++)
                {
                    if (z[p] == z[p - 1])
                    {
                        continue;
                    }
                    a = min(a, z[p] - z[p - 1]);
                }
                if (a != INT_MAX)
                {
                    ans[i][j] = a;
                }
            }
        }
        return ans;
    }
};