// Problem: Minimum Cost Path with Teleportations
// Link to the problem: https://leetcode.com/problems/minimum-cost-path-with-teleportations/
class Solution
{
public:
    int minCost(vector<vector<int>> &grid, int k)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<pair<int, int>> points;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                points.push_back({i, j});
            }
        }
        sort(points.begin(), points.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
             { return grid[a.first][a.second] < grid[b.first][b.second]; });
        vector<vector<int>> costs(m, vector<int>(n, 1000000000));
        for (int t = 0; t <= k; t++)
        {
            int minCost = 100000000;
            int j = 0;
            for (int i = 0; i < points.size(); i++)
            {
                const int r = points[i].first, c = points[i].second;
                minCost = min(minCost, costs[r][c]);
                if (i + 1 == points.size() || grid[points[i + 1].first][points[i + 1].second] != grid[r][c])
                {
                    for (int p = j; p <= i; p++)
                    {
                        costs[points[p].first][points[p].second] = minCost;
                    }
                    j = i + 1;
                }
            }
            for (int i = m - 1; i >= 0; i--)
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (i == m - 1 && j == n - 1)
                    {
                        costs[i][j] = 0;
                        continue;
                    }
                    if (i + 1 < m)
                    {
                        costs[i][j] = min(costs[i][j], costs[i + 1][j] + grid[i + 1][j]);
                    }
                    if (j + 1 < n)
                    {
                        costs[i][j] = min(costs[i][j], costs[i][j + 1] + grid[i][j + 1]);
                    }
                }
            }
        }
        const int ans = costs[0][0];
        return ans;
    }
};