// Problem: Pacific Atlantic Water Flow
// Link to the problem: https://leetcode.com/problems/pacific-atlantic-water-flow/
class Solution
{
public:
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    void bfs(int x, int y, vector<vector<int>> &heights, vector<vector<bool>> &visited)
    {
        queue<pair<int, int>> q;
        q.push({x, y});
        visited[x][y] = true;
        int n = heights.size(), m = heights[0].size();
        while (!q.empty())
        {
            int a = q.front().first, b = q.front().second;
            q.pop();
            for (vector<int> &d : directions)
            {
                int nx = a + d[0], ny = b + d[1];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && heights[nx][ny] >= heights[a][b])
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        int n = heights.size(), m = heights[0].size();
        vector<vector<bool>> x(n, vector<bool>(m, false)), y(n, vector<bool>(m, false));
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            bfs(i, 0, heights, x);
            bfs(i, m - 1, heights, y);
        }
        for (int j = 0; j < m; j++)
        {
            bfs(0, j, heights, x);
            bfs(n - 1, j, heights, y);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (x[i][j] && y[i][j])
                {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};