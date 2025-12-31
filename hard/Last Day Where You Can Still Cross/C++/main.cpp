// Problem: Last Day Where You Can Still Cross
// Link to the problem: https://leetcode.com/problems/last-day-where-you-can-still-cross/
class Solution
{
public:
    bool canCross(int row, int col, vector<vector<int>> &cells, int t)
    {
        vector<vector<int>> grid(row, vector<int>(col, 0));
        for (int i = 0; i < t; i++)
        {
            grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
        }
        queue<pair<int, int>> q;
        for (int j = 0; j < col; j++)
        {
            if (grid[0][j] == 0)
            {
                q.push({0, j});
                grid[0][j] = -1;
            }
        }
        vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty())
        {
            pair<int, int> x = q.front();
            q.pop();
            if (x.first == row - 1)
            {
                return true;
            }
            for (vector<int> &dir : dirs)
            {
                int nr = x.first + dir[0], nc = x.second + dir[1];
                if (nr >= 0 && nr < row && nc >= 0 && nc < col && grid[nr][nc] == 0)
                {
                    grid[nr][nc] = -1;
                    q.push({nr, nc});
                }
            }
        }
        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>> &cells)
    {
        int l = 1, r = cells.size(), ans = 0;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (canCross(row, col, cells, m))
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return ans;
    }
};