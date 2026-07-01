// Problem: Find the Safest Path in a Grid
// Link to the problem: https://leetcode.com/problems/find-the-safest-path-in-a-grid/
class Solution
{
public:
    const vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(const int n, const int i, const int j)
    {
        return i >= 0 && i < n && j >= 0 && j < n;
    }
    int maximumSafenessFactor(vector<vector<int>> &grid)
    {
        const int n = grid.size();
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    grid[i][j] = 0;
                }
                else
                {
                    grid[i][j] = -1;
                }
            }
        }
        while (!q.empty())
        {
            int m = q.size();
            while (m > 0)
            {
                const pair<int, int> a = q.front();
                q.pop();
                for (const pair<int, int> dir : dirs)
                {
                    const int x = a.first + dir.first, y = a.second + dir.second;
                    const int z = grid[a.first][a.second];
                    if (isValid(n, x, y) && grid[x][y] == -1)
                    {
                        grid[x][y] = z + 1;
                        q.push({x, y});
                    }
                }
                m--;
            }
        }
        priority_queue<vector<int>> pq;
        pq.push({grid[0][0], 0, 0});
        grid[0][0] = -1;
        while (!pq.empty())
        {
            const vector<int> a = pq.top();
            pq.pop();
            const int ans = a[0], i = a[1], j = a[2];
            if (i == n - 1 && j == n - 1)
            {
                return ans;
            }
            for (const pair<int, int> dir : dirs)
            {
                const int x = i + dir.first, y = j + dir.second;
                if (isValid(n, x, y) && grid[x][y] != -1)
                {
                    pq.push({min(ans, grid[x][y]), x, y});
                    grid[x][y] = -1;
                }
            }
        }
        return -1;
    }
};