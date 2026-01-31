// Problem: Map of Highest Peak
// Link to the problem: https://leetcode.com/problems/map-of-highest-peak/
class Solution
{
public:
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        const int n = isWater.size(), m = isWater[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> ans(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isWater[i][j] == 1)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
                else
                {
                    vis[i][j] = 0;
                }
            }
        }
        while (!q.empty())
        {
            const int row = q.front().first.first;
            const int col = q.front().first.second;
            const int steps = q.front().second;
            q.pop();
            ans[row][col] = steps;
            for (int i = 0; i < 4; i++)
            {
                const vector<int> delrow = {-1, 0, +1, 0};
                const vector<int> delcol = {0, +1, 0, -1};
                const int nrow = row + delrow[i];
                const int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0)
                {
                    vis[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, steps + 1});
                }
            }
        }
        return ans;
    }
};