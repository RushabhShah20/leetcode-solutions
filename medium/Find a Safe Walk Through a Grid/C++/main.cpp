// Problem: Find a Safe Walk Through a Grid
// Link to the problem: https://leetcode.com/problems/find-a-safe-walk-through-a-grid/
class Solution
{
public:
    const vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool findSafeWalk(vector<vector<int>> &grid, int health)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        deque<pair<int, int>> q;
        q.emplace_front(0, 0);
        dist[0][0] = grid[0][0];
        while (!q.empty())
        {
            const pair<int, int> a = q.front();
            q.pop_front();
            if (a.first == m - 1 && a.second == n - 1)
            {
                return true;
            }
            for (const pair<int, int> dir : dirs)
            {
                const int x = a.first + dir.first, y = a.second + dir.second;
                if (x < 0 || y < 0 || x >= m || y >= n)
                {
                    continue;
                }
                const int z = dist[a.first][a.second] + grid[x][y];
                if (z >= health)
                {
                    continue;
                }
                if (z < dist[x][y])
                {
                    dist[x][y] = z;
                    if (grid[x][y] == 0)
                    {
                        q.emplace_front(x, y);
                    }
                    else
                    {
                        q.emplace_back(x, y);
                    }
                }
            }
        }
        return false;
    }
};